#ifndef CALCFACTORY_H
#define CALCFACTORY_H

#include "abstractcalc.h"
#include "estate.h"

class CalcFactory {
public:
    static AbstractCalc* createCalc(Estate::EstateType type);
};

#endif // CALCFACTORY_H
