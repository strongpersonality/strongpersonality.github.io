#ifndef CALCULATIONFACADE_H
#define CALCULATIONFACADE_H

#include <QObject>
#include "estate.h"

class CalculationFacade : public QObject {
    Q_OBJECT
public:
    CalculationFacade(QObject *parent = nullptr);
    static int getCost(Estate *value);
};

#endif // CALCULATIONFACADE_H
