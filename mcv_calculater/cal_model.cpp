#include "cal_model.h"
#include <QDebug>



void Cal_model::add(int a, int b)
{
    result=a+b;

}

void Cal_model::sub(int a, int b)
{
    result=a-b;
}

void Cal_model::mul(int a, int b)
{
    result=a*b;
}

Cal_model::Cal_model(QObject *parent) : QObject(parent)
{

}

int Cal_model::getResult()
{

    qWarning()<<"helo get result new" ;
    return result;
}

void Cal_model::selector(int a, int b, int i)
{
    qWarning()<<"helo selector" <<a<<b<<i;



    switch (i)
    {
    case 1:
    {
        add(a,b);
        qWarning()<<"the add result is "<<result;

        break;
    }

    case 2:
    {
        sub(a,b);
        break;
    }

    case 3:
    {
        mul(a,b);
        break;
    }



    default:
        break;
    }
}

void Cal_model::man(int c, int d, int e, int f)
{
    qWarning()<<"hello man";
}


