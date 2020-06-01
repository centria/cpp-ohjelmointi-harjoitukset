#include <iostream>

using namespace std;


//Määritellään PII vakioksi

#define PII 3.14159265

//Prototyypit;
void tulostaLuvut(int alku, int loppu);
int summa(int alku, int loppu);
float kolmion_ala(float kanta, float korkeus);
float ympyran_ala(float sade);

int main()
{
    cout << "Hello World!" << endl;


    int a = 1;
    int b = 20;
    tulostaLuvut(a,b);

     cout << "Summa on: " << summa(a,b)  << endl;

     cout << "Kolmion ala on:" << kolmion_ala(3.3,5.1) << endl;

     cout << "Ympyrän ala on:" << ympyran_ala(5.5) << endl;
}


//T1. Toteuta funktio joka tulostaa kaikki luvut väliltä a - b jotka annetaan parametreina

void tulostaLuvut(int alku, int loppu)
{
    for(int i= alku;  i <= loppu; i++)
        cout << i << endl;
}


//T2. Toteuta funktio joka laskee lukujen summan annetulla välillä a - b

int summa(int alku, int loppu)
{
    int summa = 0;

    for(int i = alku;  i <= loppu; i++)
        summa += i;

    return summa;
}

//T3. Toteuta funktio joka laskee kolmion pinta-alan kun sille annetaan kanta ja korkeus.
float kolmion_ala(float kanta, float korkeus)
{

    return (0.5)*korkeus*kanta;
}


//T4. Toteuta funktio joka laskee ympyrän pinta-alan kun sille annetaan säde
float ympyran_ala(float sade)
{

    return PII * sade * sade;
}
