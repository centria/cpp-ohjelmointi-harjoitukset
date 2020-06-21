#include <iostream>

#include "henkiloauto.h"
#include "kuormaauto.h"
using namespace std;

int main()
{
    Auto::kuvaile();

    HenkiloAuto a1 = HenkiloAuto();
    KuormaAuto a2 = KuormaAuto();

    a1.setNopeus(10);
    a2.setNopeus(20);

    cout << "Auto1 nopeus:" << a1.getNopeus() << " tunniste:" << a1.getTunniste() << endl;
    cout << "Auto2 nopeus:" << a2.getNopeus() << " tunniste:" << a2.getTunniste() << endl;
    cout << "Tehdyt autot:" << Auto::tehdytAutot << endl;

    //HUOM! pitää käyttää viittausta, jotta emme kopioi oliota a1 uuteen olioon
    Auto& geneerinenAuto = a1;

    geneerinenAuto.aanimerkki();

    return 0;
}
