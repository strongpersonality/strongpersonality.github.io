#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , history(this) // Инициализация history с указанием родителя
    , calculator(this) // Инициализация calculator с указанием родителя
{
    ui->setupUi(this); // Настройка пользовательского интерфейса

    // Начальное состояние кнопки Undo
    ui->btnUndo->setEnabled(false);

    // Подключение сигналов к слотам
    connect(ui->btnCalc, &QPushButton::clicked, this, &Widget::onBtnCalcPressed);
    connect(ui->btnUndo, &QPushButton::clicked, this, &Widget::onBtnUndoPressed);
    connect(&history, &States::notifyObservers, this, &Widget::update);
}

Widget::~Widget()
{
    delete ui; // Освобождение памяти, занятой интерфейсом
}

// Обновление интерфейса при изменении данных
void Widget::update()
{
    Estate* current = history.getActualData();
    if (current) {
        fillForm(current);
    }
    ui->btnUndo->setEnabled(history.hasStates());
}

// Обработка нажатия кнопки расчета
void Widget::onBtnCalcPressed()
{
    Estate* estate = processForm();
    if (estate->getAge()!=0 && estate->getArea()!=0 && estate->get_period()!=0 && estate->getOwner()!="" &&estate->getResidents()!=0) {
        int cost = calculator.getCost(estate);
        showCost(cost);
        history.add(estate);
        ui->btnUndo->setEnabled(true);
    }
    else ui->cost->setText("Проверьте введенность данных!");
}

// Обработка нажатия кнопки отмены
void Widget::onBtnUndoPressed() {
    if (history.hasStates()) {
        history.undo();
        Estate* estate = processForm();
        if (estate) {
            int cost = calculator.getCost(estate);
            showCost(cost);
        }
    }
}

// Создание объекта Estate из данных формы
Estate* Widget::processForm() {
    return new Estate(
        ui->age->text().toInt(),
        ui->area->text().toInt(),
        ui->residents->text().toInt(),
        ui->period->currentText().mid(0,2).toInt(),
        static_cast<Estate::EstateType>(ui->estateType->currentIndex()),
        ui->owner->text(),
        this // Родительский объект
        );
}

// Заполнение формы данными из объекта Estate
void Widget::fillForm(Estate* value)
{
    if (!value) return;

    ui->age->setText(QString::number(value->getAge()));
    ui->area->setText(QString::number(value->getArea()));
    ui->residents->setText(QString::number(value->getResidents()));
    ui->period->setCurrentText(value->getMonths());
    ui->estateType->setCurrentIndex(static_cast<int>(value->getType()));
    ui->owner->setText(value->getOwner());

}

// Отображение рассчитанной стоимости
void Widget::showCost(int cost) const
{
    ui->cost->setText(QString::number(cost)+" руб");
}
