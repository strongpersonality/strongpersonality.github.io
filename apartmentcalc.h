#ifndef APARTMENTCALC_H
#define APARTMENTCALC_H

#include "abstractcalc.h"

class ApartmentCalc : public AbstractCalc {
public:
    int getCost(Estate* estate) {
        return (estate->getArea() * 1000 + estate->getResidents() * 500) * 0.01 * estate->get_period();
    }
};

#endif // APARTMENTCALC_H
