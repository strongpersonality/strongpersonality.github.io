#include "luxuriousapartmentcalc.h"

 static int luxuriousapartmentcalc::getCost(Estate* estate) {
    return estate->getArea() * 2000 + estate->getResidents() * 1000;
}
