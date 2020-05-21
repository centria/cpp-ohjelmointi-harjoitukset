#include <iostream>

using namespace std;

int main()
{
    //Tehtävä 1.
    /**Toteuta ohjelma joka kysyy käyttäjältä kaksi lukua käyttäen cin-fuktiota,
     * vertaa lukuja jos luku a on kymmenen kertaa luku b, tulosta “Annoitpa ison luvun a”,
     * muussa tapauksessa tulosta “Aikalailla samansuuruiset luvut”
     */

    int luku1, luku2;

    cout << "Anna luku1:";
    cin >> luku1;
    cout << endl;

    cout << "Anna luku2:";
    cin >> luku2;
    cout << endl;

    if(luku1 > (luku2 * 10) )
        cout << "Annoitpa ison luvun 1." << endl;
    else
        cout << "Aikalailla samansuuruiset luvut" << endl;

    //TODO: entäpäs jos luku2 on onkin yli 10*2 =)

    /*Toteuta ohjelma joka kysyy käyttäjältä ikää.
     * Riippuen iästä, tulosta:
     *  0-3 vauva, 4-15 lapsi,
     * 16-18 teini,
     * 19-25 nuori aikuinen,
     * yli 25 aikuinen
     */

    int ika;

    cout << "Anna ika:";
    cin >> ika;
    cout << endl;

   if(ika >= 0 && ika <= 9)
        cout << "Vauva" << endl;
   else if(ika >= 4 && ika <= 15)
        cout << "Lapsi" << endl;
   else if(ika >= 16 && ika <= 18)
        cout << "Teini" << endl;
   else if(ika >= 19 && ika <= 25)
        cout << "Nuori aikuinen" << endl;
   else
        cout << "Aikuinen" << endl;


   /*
    * Toteuta ohjelma joka testaa annetun luvun (0-9) ja tulostaa sen numeron tekstinä
    *  jos käyttäjä antaa muun luvun tulostetaan tieto virheellisestä syötteestä
    */

   int luku;

   cout << "Anna luku (0-9):";
   cin >> luku;
   cout << endl;

   switch (luku)
   {
        case 0:
            cout << "Nolla" << endl;
            break;
        case 1:
           cout << "Yksi" << endl;
           break;
       case 2:
          cout << "Kaksi" << endl;
          break;
       case 3:
          cout << "Kolme" << endl;
          break;
       case 4:
          cout << "Neljä" << endl;
          break;
       case 5:
          cout << "Viisi" << endl;
          break;
       case 6:
          cout << "Kuusi" << endl;
          break;
       case 7:
          cout << "Seitsemän" << endl;
          break;
       case 8:
          cout << "Kahdeksan" << endl;
          break;
       case 9:
          cout << "Yhdeksän" << endl;
          break;
       default:
          cout << "En tunnista lukua!" << endl;
          break;
   }

   /*
    * Toteuta ohjelma joka tulostaa annetun kuukauden päivien määrän. Ohjelma ei huomioi karkausvuotta
    */
   int kuukausi;

   cout << "Anna kuukauden numero (1-12):";
   cin >> kuukausi;
   cout << endl;

   switch (kuukausi)
   {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "31" << endl;
            break;
        case 2:
           cout << "28" << endl;
           break;
        default:
            cout << "30" << endl;

   }

    return 0;
}
