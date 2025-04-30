//Листинг файла estate.h
#ifndef ESTATE_H
#define ESTATE_H

#include <QObject>

class Estate : public QObject {
    Q_OBJECT
public:
    enum EstateType { ECONOM, LUXURIOUS, TOWN_HOUSE, COTTAGE };
    Estate(int age, int area, int residents, int months,EstateType type, const QString& owner, QObject* parent);

    // Геттеры
    int get_period() const;
    int getAge() const;
    int getArea() const;
    int getResidents() const;
    QString getMonths() const;
    EstateType getType() const;
    QString getOwner() const;

private:
    int age;
    int area;
    int residents;
    int months;
    EstateType type;
    QString owner;
};

#endif // ESTATE_H
