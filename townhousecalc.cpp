#include "townhousecalc.h"

static int townhousecalc::getCost(Estate* estate) {
    return estate->getArea() * 3000 + estate->getResidents() * 1500;
}
