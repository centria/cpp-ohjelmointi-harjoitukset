#include "kuormaauto.h"

KuormaAuto::KuormaAuto()
{

}


void KuormaAuto::setNopeus(int n)
{
    nopeus = n;

    if(nopeus > 80)
        nopeus = 80;
}

