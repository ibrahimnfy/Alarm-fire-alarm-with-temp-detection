#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    server=  new QTcpServer(this);
    server->listen(QHostAddress::LocalHost, 1234);
    connect(server,&QTcpServer::newConnection, this, [=](){
        qDebug()<< "Alarm connected to the server";
        while(server->hasPendingConnections()){
            QTcpSocket * socket = server->nextPendingConnection();
            connect(socket, &QTcpSocket::readyRead, this, [=](){
                QByteArray data = socket->readAll();
                if (data.startsWith("y") || data.startsWith("Y")) {
                    alarm();
                }
            });
        }
    });


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::alarm()
{
    if(alarmTimer!=nullptr && alarmTimer->isActive()){
        return;
    }
    if(alarmTimer==nullptr){
        alarmTimer=new QTimer(this);
        connect(alarmTimer, &QTimer::timeout,this,[=](){
            if(alarmVisible){
                ui->textEdit->clear();
                alarmVisible=false;
                alarmTimer->start(100);

            }
            else{
                ui->textEdit->setTextBackgroundColor(Qt::red);
                ui->textEdit->setText("ALAARRMMM!!!!");
                alarmVisible = true;
                alarmTimer->start(2000);
            }
        });
    }
    alarmVisible=false;
    alarmTimer->start(100);
}
