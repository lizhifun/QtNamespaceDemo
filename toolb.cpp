#include "toolb.h"
#include <QDebug>


ToolB::ToolB(QObject *parent) : QObject(parent)
{

}//class

void ToolB::Func1()
{
    qDebug() << "ToolB Func1";
}

void ToolB::Func2()
{
    qDebug() << "ToolB Func2";
}

void ToolB::Func3()
{
    qDebug() << "ToolB Func3";
}

void ToolB::Func4()
{
    qDebug() << "ToolB Func4";
}

