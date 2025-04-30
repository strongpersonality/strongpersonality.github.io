#include "states.h"

States::States(QObject *parent) : QObject(parent)
{
    actualData = nullptr;
}
States::~States() {
    qDeleteAll(array); // Удаляем все объекты
    array.clear();
    delete actualData; // Удаляем текущие данные
}
void States::add(Estate* value) {
    array.append(value);    // Добавляем в QList
    actualData = value;     // Обновляем текущие данные
    notifyObservers(); // Уведомляем наблюдателей
}

// Отмена последнего действия
void States::undo() {
    if (!array.isEmpty()) {
        actualData = array.takeAt(array.length()-2); // Берем последний элемент
        notifyObservers();
    } else {
        actualData = nullptr;
    }
}

// Проверка наличия элементов в коллекции
bool States::hasStates() const {
    return array.length()-1;
}

// Получение текущих данных
Estate* States::getActualData() const {
    return actualData;
}
