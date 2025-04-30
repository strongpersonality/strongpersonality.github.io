//Листинг widget.h
#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
#include <QComboBox>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include "estate.h"
#include "states.h"
#include "calculationfacade.h"

// Предварительное объявление класса Ui::Widget (генерируется автоматически Qt Designer)
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void update();

private slots:
    void onBtnCalcPressed();
    void onBtnUndoPressed();

private:
    Estate* processForm();       // Создание объекта Estate из данных формы
    void fillForm(Estate* value);      // Заполнение формы данными из Estate
    void showCost(int cost) const;     // Отображение рассчитанной стоимости
    Ui::Widget *ui;
    States history;                    // История запросов (паттерн Наблюдатель)
    CalculationFacade calculator;      // Фасад для расчетов
};
#endif
