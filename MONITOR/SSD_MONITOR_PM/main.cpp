/*
 * File: main.cpp
 * Date: 2016. 8. 8.
 * Author: Yongseok Jin (mnm102211@gmail.com)
 * Copyright(c)2016
 * Hanyang University, Seoul, Korea
 * Embedded Software Systems Laboratory, All right reserved
 */

#include "monitorform.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    MonitorForm w3(9992, "VSSIM3");
//    w3.show();

    MonitorForm w2(9991, "VSSIM2");
    w2.show();

    MonitorForm w1(9990, "VSSIM1");
    w1.show();

    return a.exec();
}
