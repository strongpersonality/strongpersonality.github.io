#ifndef LUXURIOUSAPARTMENTCALC_H
#define LUXURIOUSAPARTMENTCALC_H

#include "abstractcalc.h"

class LuxuriousApartmentCalc : public AbstractCalc {
public:
    int getCost(Estate* estate){return (estate->getArea() * 2000 + estate->getResidents() * 1000) * 0.01 * estate->get_period();}
};

#endif // LUXURIOUSAPARTMENTCALC_H
