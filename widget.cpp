#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    //初始化属性
    nameIndex = 0;
    isChecked= false;
    len = 0;

    //设置初始化界面s
    ui->setupUi(this);
    ui->image->setText("张三");
    setFixedSize(width()*1.1,height()*1.1);//固定长宽
    setWindowTitle("随机点名器");

    //准备点名内容
    QString Name;
    QString filename = QDir::currentPath() + "/NameList.txt";
    qDebug()<<filename<<endl;
    QFile file(filename);
    QTextStream stream(&file);

    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        while (!stream.atEnd()) {
            Name = stream.readLine();
            qDebug()<<Name<<endl;
            name_list.push_back(Name);
        }
    }
    else
    {
        qDebug()<<"file is open failed"<<strerror(errno)<<"file size is "<<file.size()<<endl;
    }
    file.close();

    src_list = name_list;

    if(!ui->checkBox->isChecked())
        ui->btn_save->hide();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btn_random_clicked()
{
    if(ui->checkBox->isChecked())
        ui->btn_save->show();
    else
        ui->btn_save->hide();
    if(name_list.size() == 0)
    {
        qDebug()<<"namelist is empty, please check filepath"<<endl;
        isChecked = true;
        ui->image->setText("点名完毕");
    }
    else {
        nameIndex= rand()%name_list.size();//获取随机下标
        QString Name = name_list[nameIndex];
        ui->image->setText(Name);
        preIndex.push_back(nameIndex);
        name_list.removeAt(nameIndex);
        if(ui->checkBox->isChecked())
        {
            if(QMessageBox::question(this,"提示",Name+"是否到位")!=QMessageBox::Yes)
            {
                absent_list.push_back(Name);
                Name += "未到";
            }
        }
        pre_list.push_back(Name);
        qDebug()<<"has sign "<<Name<<endl;
    }
    QString tip = "点名清单，已经点名"+QString::number(pre_list.size())+"人";
    ui->label_check->setText(tip);
    ui->listWidget->clear();
    for(auto i:pre_list)
    {
        ui->listWidget->addItem(i);
    }
}

void Widget::on_btn_restart_clicked()
{
    ui->listWidget->clear();
    name_list = src_list;
    isChecked = false;
    pre_list.clear();
    qDebug()<<"已经重置"<<endl;
}

void Widget::on_btn_save_clicked()
{
    QString filename = QDir::currentPath()+"/result.txt";
    QFile file(filename);
    if(file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        for(int i=0; i<absent_list.size(); i++)
        {
            QString absent_name = absent_list[i]+'\n';
            file.write(absent_name.toStdString().c_str());
        }
    }
    QMessageBox::information(this,"提示","已经写入文件"+filename);
    file.close();
}
