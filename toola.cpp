#include "toola.h"
#include <QDebug>

namespace SpaceA {

ToolA::ToolA(QObject *parent) : QObject(parent)
{

}//class

void ToolA::Func1()
{
    qDebug() << "ToolA Func1";
}

void ToolA::Func2()
{
    qDebug() << "ToolA Func2";
}

void ToolA::Func3()
{
    qDebug() << "ToolA Func3";
}

void ToolA::Func4()
{
    qDebug() << "ToolA Func4";
}


}//namespace
