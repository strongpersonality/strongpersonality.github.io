#include "calcfactory.h"
#include "apartmentcalc.h"
#include "luxuriousapartmentcalc.h"
#include "townhousecalc.h"
#include "cottagecalc.h"

AbstractCalc* CalcFactory::createCalc(Estate::EstateType type) {
    switch (type) {
    case Estate::ECONOM:
        return new ApartmentCalc();
    case Estate::LUXURIOUS:
        return new LuxuriousApartmentCalc();
    case Estate::TOWN_HOUSE:
        return new TownhouseCalc();
    case Estate::COTTAGE:
        return new CottageCalc();
    default:
        return nullptr;
    }
}
