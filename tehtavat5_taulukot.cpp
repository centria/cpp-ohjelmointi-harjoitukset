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


    #define MAX_LUVUT 10

    #define LED_LEVEYS 16
    #define LED_KORKEUS 12

    int kysyLuku();
    void kaannaTaulukko(int taulukko[], int pituus);
    void tyhjenna(bool taulukko[][LED_LEVEYS], int korkeus, int leveys);
    void tulosta(bool taulukko[][LED_LEVEYS], int korkeus, int leveys);
    void aseta(bool taulukko[][LED_LEVEYS], int i, int j, bool arvo);

    int main()
    {
        //        Toteuta funktio joka kysyy käyttäjältä 10 lukua ja sijoitaa ne taulukkoon

        int luvut[MAX_LUVUT];

        for(int i = 0; i < MAX_LUVUT; i++ )
        {
            cout << "Luku " << i << "/" << MAX_LUVUT << endl;

            luvut[i] = kysyLuku();
        }


        //Toteuta funktio joka kääntää int-tyyppisen taulukot toisinpäin (reverse), niin että alkion 0 arvo siirtyy alkioon n-1 ja vastaavasti n-1 alkioon 0, jne….
        kaannaTaulukko(luvut,MAX_LUVUT);



        /*Toteuta funktiot 16 x 12 kokoisen kaksiulotteisen taulukon käyttämiseen LED-näyttönä.
                Taulukko on bool -tyyppinen, bool arvo kertoo onko LED on vai off. Toteuta funktiot:

        aseta(bool tila), asettaa LEDin tilaan
        tulosta, tulostaa LED-matriisin nollina ja ykkösinä.
        tyhjenna, asettaa kaikki LEDit falseksi*/

        bool ledit[LED_KORKEUS][LED_LEVEYS];

        tyhjenna(ledit,LED_KORKEUS,LED_LEVEYS);
        aseta(ledit,10,10, true);
        tulosta(ledit,LED_KORKEUS,LED_LEVEYS);
    }

    int kysyLuku()
    {
        int luku;

        cout << "Anna luku:";
        cin >> luku;

        cout << endl;

        return luku;
    }

    void kaannaTaulukko(int taulukko[], int pituus)
    {
        int indeksi = 0;
        while (indeksi < pituus)
        {
            int temp = taulukko[indeksi];
            taulukko[indeksi] = taulukko[pituus];
            taulukko[pituus] = temp;
            indeksi++;
            pituus--;
        }
    }

    void tyhjenna(bool taulukko[][LED_LEVEYS], int korkeus, int leveys)
    {
        for(int i = 0; i < korkeus; i++)
            for(int j = 0; j < leveys; j++)
                taulukko[i][j] = false;

        /* Edistyneempi koodari käyttäisi memset -funktiota, se asettaa muistialuen tiettyyn arvoon
        paramerit: muistialueen alku, asetettava arvo, asetettvan alueen koko
        huom: sizeof() funktio kertoo tieotyypin koon*/

       // memset(taulukko,false,korkeus*leveys*sizeof(bool));
    }


    void tulosta(bool taulukko[][LED_LEVEYS], int korkeus, int leveys)
    {
        for(int i = 0; i < korkeus; i++)
        {
            for(int j = 0; j < leveys; j++)
                cout << (taulukko[i][j] == true ? "1" : "0") ;

            cout << endl;
        }

    }

    void aseta(bool taulukko[][LED_LEVEYS], int i, int j, bool arvo)
    {

                taulukko[i][j] = arvo;


    }



