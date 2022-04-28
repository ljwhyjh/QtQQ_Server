#include "TcpServer.h"
#include "TcpSocket.h"
#include <QTcpSocket>

TcpServer::TcpServer(int port):m_port(port)
{
}

TcpServer::~TcpServer()
{
}

bool TcpServer::run()
{
	if (this->listen(QHostAddress::AnyIPv4,m_port))
	{
		qDebug() << QString::fromLocal8Bit("����˼����˿� %1 �ɹ���").arg(m_port);
		return true;
	}
	else
	{
		qDebug() << QString::fromLocal8Bit("����˼����˿� %1 ʧ�ܣ�").arg(m_port);
		return false;
	}
	
}

void TcpServer::incomingConnection(qintptr socketDescriptor)
{
	qDebug() << QString::fromLocal8Bit("�µ�����;") << socketDescriptor << endl;

	TcpSocket* tcpsocket = new TcpSocket();
	tcpsocket->setSocketDescriptor(socketDescriptor);
	tcpsocket->run();

	//�յ��ͻ������ݺ�,sever���д���
	connect(tcpsocket, SIGNAL(signalGetDataFromClient(QByteArray&, int)),
		this, SLOT(SocketDataProcessing(QByteArray&, int)));
	//�յ��ͻ��˶Ͽ����Ӻ�server���д���
	connect(tcpsocket, SIGNAL(signalClientDisconnect(int)),
		this, SLOT(SocketDisconnected(int))); 

	//��socket��ص�������
	m_tcpSockedConnectList.append(tcpsocket);
}

void TcpServer::SocketDisconnected(int descriptor)
{
	for (int i = 0; i < m_tcpSockedConnectList.count(); i++)
	{
		QTcpSocket *item = m_tcpSockedConnectList.at(i);
		int itemDescriptior = item->socketDescriptor();

		//���ҶϿ����ӵ�socket
		if (itemDescriptior == descriptor || itemDescriptior == -1)
		{
			m_tcpSockedConnectList.removeAt(i);//�Ͽ���socket���������Ƴ�
			item->deleteLater();//������Դ
			qDebug() << QString::fromLocal8Bit("TcpSocket�Ͽ����ӣ�")<< descriptor << endl;
			return;
		}
	}
}

void TcpServer::SocketDataProcessing(QByteArray& SendData, int descriptor)
{
	for (int i = 0; i < m_tcpSockedConnectList.count(); ++i)
	{
		QTcpSocket *item = m_tcpSockedConnectList.at(i);
		if (item->socketDescriptor() == descriptor)
		{
			qDebug() << QString::fromLocal8Bit("����IP:") << item->peerAddress().toString()
				  << QString::fromLocal8Bit("���������ݣ�") << QString(SendData);

			emit signalTcpMsgComes(SendData);
		}
	}
}