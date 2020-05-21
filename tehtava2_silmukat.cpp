#include <iostream>

using namespace std;

int main()
{
    /*Toteuta ohjelma joka tulosta 10 ensimmäisen luonnollisen numeron summan*/
    int summa = 0;

    for(int i = 1; i <= 10; i++)
        summa += i;

    cout << "summa:" << summa << endl;


    /*
     * Toteuta ohjelma silmukoille joka testaa onko luku alkuluku, testi toteutetaan luvuille 1 … 100
     */
    for(int i = 1; i <= 100; i++)
    {
        bool onkoAlkuLuku = true;

        //Testataan kaikki aiemmat luvut, onko jaollinen
        for(int j = 2; j <= i-1; j++)
        {
            if(i % j == 0)
            {
                onkoAlkuLuku = false;
                break;
            }
        }
        if(onkoAlkuLuku)
            cout << "luku:" << i << " on alkuluku" << endl;
        else
            cout << "luku:" << i << " ei ole alkuluku" << endl;
    }


    /*Toteuta ohjelma joka selvittää kahden luvun suurimman yhteisen jakajan, tee toteutus silmukoilla*/
    
    int luku1,luku2;
    luku1 = 7;
    luku2 = 5;
    int suurinMahdollinen = luku1 < luku2 ? luku1 : luku2; //Aloitetaan tarkastus siitä luvusta kumpi on pienempi.

    while(suurinMahdollinen > 1)
    {
        if(luku1 % suurinMahdollinen == 0 && luku2 % suurinMahdollinen == 0)
            break;

        suurinMahdollinen--;
    }

    cout << "lukujen: " << luku1 << " & " << luku2 << " suurin jakaja on: "<< suurinMahdollinen << endl;

    return 0;
}
