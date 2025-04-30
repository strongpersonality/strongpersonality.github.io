#include "cottagecalc.h"

static int cottagecalc::getCost(Estate* estate) {
    return estate->getArea() * 6000 + estate->getResidents() * 2500;
}
