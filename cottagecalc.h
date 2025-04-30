#ifndef COTTAGECALC_H
#define COTTAGECALC_H

#include "abstractcalc.h"

class CottageCalc : public AbstractCalc {
public:
    int getCost(Estate* estate){return (estate->getArea() * 3000 + estate->getResidents() * 1500) * 0.01 * estate->get_period();};
};

#endif // COTTAGECALC_H
