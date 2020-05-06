/**
 * @file main.cpp
 * @brief Tehtävä 1.
 * @author Jari Isohanni
 * Contact: jari.isohanni@centria.fi
 */

#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

//Määritellään PII
#define PII 3.1415

/** ÄLÄ MUUTA NÄITÄ - ALKU **/
bool areFloatsEquals(double a, double b);
void testaaTehtava1(double r, double pii);
double testaaTehtava2(double kanta, double korkeus);
void testaaTehtava3(int tulos);

/** ÄLÄ MUUTA NÄITÄ - LOPPU **/
int main()
{
    cout << "Hei, tässä ensimmäiset tehtävät, tämä koodi pitäisi saada tulostamaan 10 kertaa OK" << endl;

    /*Tässä rivissä on jotain vikaa, pitäisi tulostaa "T1. - OK" */
    cout << "T1. - OK << endl;

    /*Korjaa seuraava rivi niin, että määrittelet muuttujan (arvolla 5.0) sekä luot vakion PII (arvolla 3.1415), jotta laskuri laskee oikein ympyrän säteen*/
    double ympyrän_säde = 5.0;
    testaaTehtava1(ympyrän_säde, PII);

    int x,y;
    x = 5.0;
    y = 5.0;
    double y = testaaTehtava2(x,y); //Tässä on joitain vikaa, yritämme laskea kolmion korkeutta



    int a = 10;
    int b = 190;
    int c = 4;
    bool tulos = a + b *c; //Tästä pitäisi saada tulos 800
    testaaTehtava3(tulos)


    float 1_ika = 11; //Tässä on jotain vikaa, pitäisi luoda muuttuja jossa henkilön ikä
    cout << "T4. - OK" << endl;


    cout << "Anna lukuarvo: ";
    // Toteuta tähän lauseke joka ottaa syöteen käyttäjältä numero (cin), muuttujaan syote

    cout << "Annoit numeron: " << syote << endl;
    cout << "T5. - OK" << endl;


    return 0; //Tässä on jotain vikaa
}

/** ÄLÄ MUUTA TÄSTÄ ALASPÄIN **/

void testaaTehtava3(int tulos)
{
    if(tulos == 800)
    {
          cout << "T3. - OK";
    }
    else
        cout << "T3. - FAILED";
}

double testaaTehtava2(double kanta, double korkeus)
{
    double ala = (kanta*korkeus)/2.0;
    cout << "T2. - OK";
}

void testaaTehtava1(double r, double pii)
{
    if(areFloatsEquals(2*r*pii,2*5.0*pii))
    {
          cout << "T1. - OK";
    }
    else
        cout << "T1. - FAILED";
}



bool areFloatsEquals(double a, double b)
{
    return fabs(a - b) <= std::numeric_limits<double>::epsilon();
}
