#include "rest.h"

Rest::Rest(QObject *parent) : QObject(parent)
{


    QNetworkAccessManager *manager = new QNetworkAccessManager();
    QObject::connect(manager,SIGNAL(finished(QNetworkReply*)),this,SLOT(display()));




 //    QObject::connect(manager, SIGNAL(finished(QNetworkReply*)),
 //            this, SLOT(replyFinished(QNetworkReply*)));



     manager->get(QNetworkRequest(QUrl("https://graph.facebook.com/youtube/?fref=ts")));

}

void Rest::display()
{
 qWarning()<<"hello";
}
