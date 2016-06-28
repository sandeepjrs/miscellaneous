#ifndef STORE_H
#define STORE_H

#include <QObject>
#include <QString>

class Store : public QObject
{
    Q_OBJECT
public:
    explicit Store(QObject *parent = 0);

signals:



public slots:

    void storeFeilds(int id, QString name,QString address, int phone, QString email);

private:

    int genrateId();

    int id=0;
};

#endif // STORE_H
