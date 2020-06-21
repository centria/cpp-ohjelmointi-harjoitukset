#ifndef AUTO_H
#define AUTO_H


class Auto
{
public:
    Auto();
     Auto(long tunniste);

    void setNopeus(int n);
    void setTunniste(long t);

    int getNopeus();
    long getTunniste();

    virtual void aanimerkki();
    virtual void kaynnista() = 0;

    //Staattisen muuttujat:
public:
    static int tehdytAutot;
    static void kuvaile();

protected:
    int nopeus;
    long tunniste;

};

#endif // AUTO_H
