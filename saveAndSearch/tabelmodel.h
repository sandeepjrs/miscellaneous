#ifndef TABELMODEL_H
#define TABELMODEL_H

#include <QString>
#include <QAbstractListModel>


class ContactInfo
{

public:

    ContactInfo();
    ContactInfo(QString c_name, QString c_ph, QString c_add);

    static int getID();
    QString getName();
    QString getPh();
    QString getAdd();
private:
    int id=0;
    QString name, ph, add;

};



class TabelModel : public QAbstractListModel
{

    Q_OBJECT

public:
    TabelModel(QObject *parent = 0);

    void addItemInfo(const ContactInfo &iInfo);

    int rowCount(const QModelIndex & parent= QModelIndex()) const;



public slots:

    void setContacts(int id, QString name, QString address, QString phone);

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;

private:
    QList<ContactInfo> m_InfoList;
    int count;
};

#endif // TABELMODEL_H
