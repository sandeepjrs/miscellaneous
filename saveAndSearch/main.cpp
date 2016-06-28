#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "store.h"
#include "tabelmodel.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    //    Store myStore;

    //    QObject::connect();


    TabelModel myTableModel;
    engine.rootContext()->setContextProperty("myTableModel",&myTableModel);





    //mytable.setContacts(23,"sandeep","chennai DLF","94448441945");




    return app.exec();
}
