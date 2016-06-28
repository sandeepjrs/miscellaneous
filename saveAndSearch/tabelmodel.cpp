#include "tabelmodel.h"

#include <QDebug>



TabelModel::TabelModel(QObject *parent)
{


                                                     }


  ContactInfo::ContactInfo(): name(""), ph(""),add("")
{

}

ContactInfo::ContactInfo( QString c_name, QString c_ph, QString c_add)
{
    id=getID();
    c_name=name;
    c_ph=ph;
    c_add=add;
}

int ContactInfo::getID()
{
    //id++;

    //return id;
}

QString ContactInfo::getName()
{
    return name;
}

QString ContactInfo::getPh()
{
    return ph;
}

QString ContactInfo::getAdd()
{
    return add;
}


void TabelModel::addItemInfo(const ContactInfo &iInfo)
{

    beginInsertRows(QModelIndex(),rowCount(),rowCount());

    m_InfoList << iInfo;
    //qWarning() << m_InfoList;
    endInsertRows();



}

int TabelModel::rowCount(const QModelIndex & parent) const {
    Q_UNUSED(parent);
    return m_InfoList.count();
}

void TabelModel::setContacts(int id, QString name, QString address, QString phone)
{

    count++;
    addItemInfo(ContactInfo(name,address,phone));

}

QVariant TabelModel::data(const QModelIndex &index, int role) const
{



}




