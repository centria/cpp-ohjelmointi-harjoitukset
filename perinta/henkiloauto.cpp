#include "henkiloauto.h"

HenkiloAuto::HenkiloAuto()
{
    //Pitää kutsua isäntäluokan konstruktori,
    // jos haluamme käyttää juuri tiettyä konstruktoria
    // jos ei määritetä kutsutaan oletusta

    Auto();
}

