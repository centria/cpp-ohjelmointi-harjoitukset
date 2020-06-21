#include "kuormaauto.h"

KuormaAuto::KuormaAuto(): Auto()
{

}


void KuormaAuto::setNopeus(int n)
{
    nopeus = n;

    if(nopeus > 80)
        nopeus = 80;
}

