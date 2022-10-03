#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>
#include <vector>
#include <QFile>
#include <QTextStream>
#include <QTextCodec>
#include <vector>
#include <QColor>
#include <QDir>
#include <QMessageBox>
using namespace std;

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    int nameIndex;//当前点名的例子
    vector<int> preIndex;//已经点过的人
    QStringList name_list;//总体人数
    QStringList pre_list;//已经点到的人
    QStringList absent_list;
    bool isChecked;
    int len;
    QStringList src_list;

private slots:
    void on_btn_random_clicked();

    void on_btn_restart_clicked();

    void on_btn_save_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
