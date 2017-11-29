#include "cappgpio.h"
#include "ui_cappgpio.h"

CAppGpio::CAppGpio(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CAppGpio)
{
    ui->setupUi(this);
    m_state = false;
    m_gpio = NULL;
}

CAppGpio::~CAppGpio()
{
    if (m_gpio) delete m_gpio;  // si l'objet existe
    delete ui;
}

void CAppGpio::on_bpSS_clicked()
{
    m_gpio = new CGpio(ui->comboBox->itemText(ui->comboBox->currentIndex()).toInt()); // GPIO choisi
    ui->comboBox->setEnabled(false);  // désactive la combo

    if (m_state) {  // bouton bascule
       ui->bpSS->setText("ON");  // change le texte du bouton
       m_gpio->ecrire(0);  // éteint la LED
       m_state = false;
    } else {
        ui->bpSS->setText("OFF");
        m_gpio->ecrire(1);   // allume la LED
        m_state = false;
    } // else
}
