#include "mainwindow.h"
#include "ui_mainwindow.h"

//using namespace SpaceA;  //此处引用namespace后 无需在每次调用前加SpaceA

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    SpaceA::ToolA::Func1();//头部引用namespace后 无需在每次调用前加SpaceA
    SpaceA::ToolA::Func2();
    SpaceA::ToolA::Func3();
    SpaceA::ToolA::Func4();

    ToolB::Func1();
    ToolB::Func2();
    ToolB::Func3();
    ToolB::Func4();
}

MainWindow::~MainWindow()
{
    delete ui;
}

