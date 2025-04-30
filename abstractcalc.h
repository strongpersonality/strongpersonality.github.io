#ifndef ABSTRACTCALC_H
#define ABSTRACTCALC_H

#include "estate.h"

class AbstractCalc {
public:
    virtual int getCost(Estate* estate) = 0;
    virtual ~AbstractCalc() = default;
};

#endif // ABSTRACTCALC_H
