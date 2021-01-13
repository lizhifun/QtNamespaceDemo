#ifndef TOOLA_H
#define TOOLA_H

#include <QObject>

namespace SpaceA {

class ToolA : public QObject
{
    Q_OBJECT
public:
    explicit ToolA(QObject *parent = nullptr);
    static void Func1();
    static void Func2();
    static void Func3();
    static void Func4();

};//class

}//namespace
#endif // TOOLA_H
