#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<QObject>
#include <QNetworkAccessManager>
#include <QNetworkRequest>

#include "rest.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    Rest myRest;








    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
