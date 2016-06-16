#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QtQml/QQmlComponent>

#include "cal_model.h"


int main(int argc, char *argv[])
{




    QApplication app(argc, argv);

    QQmlApplicationEngine engine;

     Cal_model myCalModel;

    //    int sandeep=992;

    //    engine.rootContext()->setContextProperty("testPurpose",sandeep);

        engine.rootContext()->setContextProperty("cal_result",myCalModel.getResult());


    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    QObject *rootObject = engine.rootObjects().first();

//     QObject::connect(rootObject,SIGNAL(startSignal()),&repApp,SLOT(startAction()));
        QObject::connect(rootObject,SIGNAL(rawValues(int,int,int)),&myCalModel,SLOT(selector(int,int,int)));

            return app.exec();
}
