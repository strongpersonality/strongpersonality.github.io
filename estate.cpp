#include "estate.h"

// Конструктор с инициализацией всех полей
Estate::Estate(int age, int area, int residents, int months,
               EstateType type, const QString& owner, QObject* parent):
    QObject(parent),age(age),area(area),residents(residents),months(months+((months==1)*11)),type(type),owner(owner) {
}

// Геттеры для полей
int Estate::getAge() const { return age; }
int Estate::getArea() const { return area; }
int Estate::getResidents() const { return residents; }
QString Estate::getMonths() const {
    if(months==6) return "6 месяцев";
    if(months==12) return "1 год";
    if(months==18) return "18 месяцев";
}
Estate::EstateType Estate::getType() const { return type; }
int Estate::get_period() const {return months;}
QString Estate::getOwner() const { return owner; }
