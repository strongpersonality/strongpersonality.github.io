#include "calculationfacade.h"
#include "abstractcalc.h"
#include "calcfactory.h"
CalculationFacade::CalculationFacade(QObject *parent) : QObject(parent) {}

int CalculationFacade::getCost(Estate *value) {
    AbstractCalc* calculator = CalcFactory::createCalc(value->getType());
    if (!calculator) return -1;
    int cost = calculator->getCost(value);
    delete calculator;
    return cost;
}
