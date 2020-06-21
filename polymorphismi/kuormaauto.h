#ifndef KUORMAAUTO_H
#define KUORMAAUTO_H

#include "auto.h"

class KuormaAuto: public Auto
{
public:
    KuormaAuto();

    void setNopeus(int n);

      void aanimerkki();
      void kaynnista();

};

#endif // KUORMAAUTO_H
