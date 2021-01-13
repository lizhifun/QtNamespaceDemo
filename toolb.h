#ifndef TOOLB_H
#define TOOLB_H

#include <QObject>


class ToolB : public QObject
{
    Q_OBJECT
public:
    explicit ToolB(QObject *parent = nullptr);
    static void Func1();
    static void Func2();
    static void Func3();
    static void Func4();

};

#endif // TOOLB_H
