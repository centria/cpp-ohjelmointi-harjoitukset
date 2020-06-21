#include "kuormaauto.h"

#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

KuormaAuto::KuormaAuto(): Auto()
{

}


void KuormaAuto::setNopeus(int n)
{
    nopeus = n;

    if(nopeus > 80)
        nopeus = 80;
}


void KuormaAuto::aanimerkki()
{
    cout << "TUUT TUUT" << endl;
}

void KuormaAuto::kaynnista()
{

}
