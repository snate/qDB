//main.cpp
#include<QApplication>
#include"controller.h"

int main(int argc, char *argv[]) {
    QApplication app(argc,argv);

    Controller* mio = new Controller();
    mio->setupUi();

    return app.exec();
}
