#ifndef TOWNHOUSECALC_H
#define TOWNHOUSECALC_H

#include "abstractcalc.h"

class TownhouseCalc : public AbstractCalc {
public:
    int getCost(Estate* estate){ return (estate->getArea() * 4000 + estate->getResidents() * 2500) * 0.01 * estate->get_period();};
};

#endif // TOWNHOUSECALC_H
