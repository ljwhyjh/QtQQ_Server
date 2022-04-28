#pragma once

#include <QtWidgets/QDialog>
#include "ui_QtQQ_Server.h"
#include "TcpServer.h"

#include <QSqlQueryModel>
#include <QTimer>
#include <QUdpSocket>

class QtQQ_Server : public QDialog
{
	Q_OBJECT

public:
	QtQQ_Server(QWidget *parent = Q_NULLPTR);
	
private:
	void initComBoxData(); //��ʼ��Ͽ�����
	void initTcpSocket();  //��ʼ��TCP
	void initUdpSocket();  //��ʼ��udp
	bool connectMySql();
	void setDepNameMap();
	void setStatusMap();
	void setOnlineMap();
	int  getCompDepID();//��ȡ��˾ȺQQ��
	void updateTableData(int depID=0, int employeeID =0);

private slots:
	void onUDPbroadMsg(QByteArray& btData);
	void onRefresh();
	void on_queryDepartmentBtn_clicked();//����Ⱥ����Ա��������ź���ۺ����Զ�����
	void on_queryIDBtn_clicked(); //����Ա��QQ��ɸѡ
	void on_logoutBtn_clicked();//ע��Ա��QQ��
	void on_selectPictureBtn_clicked(); //ѡ��ͼƬ��ť��Ա���Ĵ��գ�
	void on_addBtn_clicked();//����Ա��

private:
	Ui::QtQQ_ServerClass ui;

	QTimer *m_timer;//��ʱˢ������
	int m_compDepID;  //��˾ȺQQ��
	int m_depID;      //����QQ��
	int m_employeeID; //Ա��QQ��
	QString m_pixPath;//ͷ��·��
	QMap<QString, QString> m_statusMap; //״̬
	QMap<QString, QString> m_depNameMap;//��������
	QMap<QString, QString>m_onlineMap; //����״̬

	QSqlQueryModel m_queryInfoModel;//��ѯ����Ա������Ϣģ��

	TcpServer* m_tcpServer;//tcp����� 
	QUdpSocket* m_udpSender; //udp�㲥
};