#ifndef REST_H
#define REST_H


#include<QDebug>


#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<QObject>
#include <QNetworkAccessManager>
#include <QNetworkRequest>

class Rest : public QObject
{
    Q_OBJECT
public:
    explicit Rest(QObject *parent = 0);
    void display();

signals:

public slots:
};

#endif // REST_H
