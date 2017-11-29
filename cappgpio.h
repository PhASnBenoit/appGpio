#ifndef CAPPGPIO_H
#define CAPPGPIO_H

#include <QMainWindow>
#include "/home/philippe/devQt/ditRasp/cgpio.h"

namespace Ui {
class CAppGpio;
}

class CAppGpio : public QMainWindow
{
    Q_OBJECT

public:
    explicit CAppGpio(QWidget *parent = 0);
    ~CAppGpio();

private slots:
    void on_bpSS_clicked();

private:
    Ui::CAppGpio *ui;
    CGpio *m_gpio;
    bool m_state;
};

#endif // CAPPGPIO_H
