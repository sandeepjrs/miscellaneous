#include "store.h"

Store::Store(QObject *parent) : QObject(parent)
{

}

void Store::storeFeilds(int id, QString name, QString address, int phone, QString email)
{



}

int Store::genrateId()
{
    id++;
    return id;
}
