#ifndef CAL_MODEL_H
#define CAL_MODEL_H

#include <QObject>

class Cal_model: public QObject
{
    Q_OBJECT
public:

    Cal_model(QObject *parent = 0);
    Q_INVOKABLE void man(int ,int ,int ,int );
    Q_INVOKABLE int getResult();



    //    ~Cal_model();

public slots:

    void selector(int a, int b, int i);





private:
    int result;
    void add(int a, int b);
    void sub(int a, int b);
    void mul(int a, int b);
};

#endif // CAL_MODEL_H
