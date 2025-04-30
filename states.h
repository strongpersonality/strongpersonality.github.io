#ifndef STATES_H
#define STATES_H
// Листинг файла states.h
#include <QObject>
#include "estate.h"
class States : public QObject
{
    Q_OBJECT
public:
    explicit States(QObject* parent = nullptr);
    ~States();

    void undo();
    bool hasStates() const;
    Estate* getActualData() const;
    void add(Estate* value);

signals:
    void notifyObservers();

private:
    QList<Estate*> array;
    Estate* actualData;
};
#endif
