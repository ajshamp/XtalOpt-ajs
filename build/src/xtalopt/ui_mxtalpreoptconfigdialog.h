/********************************************************************************
** Form generated from reading UI file 'mxtalpreoptconfigdialog.ui'
**
** Created: Sun Jan 20 20:23:19 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MXTALPREOPTCONFIGDIALOG_H
#define UI_MXTALPREOPTCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_MXtalPreoptConfigDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spin_maxSteps;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;
    QLabel *label_6;
    QSpinBox *spin_sCUpdateInterval;
    QLabel *label_5;
    QSpinBox *spin_econv;
    QDoubleSpinBox *spin_vdwCut;
    QSpinBox *spin_cutoffUpdateInterval;
    QCheckBox *cb_updateWithSc;
    QLabel *label_4;
    QDoubleSpinBox *spin_eleCut;
    QFrame *line_3;
    QFrame *line;
    QCheckBox *cb_debug;
    QFrame *line_2;
    QLabel *label_3;
    QLabel *label_warning;

    void setupUi(QDialog *MXtalPreoptConfigDialog)
    {
        if (MXtalPreoptConfigDialog->objectName().isEmpty())
            MXtalPreoptConfigDialog->setObjectName(QString::fromUtf8("MXtalPreoptConfigDialog"));
        MXtalPreoptConfigDialog->resize(400, 300);
        gridLayout = new QGridLayout(MXtalPreoptConfigDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(MXtalPreoptConfigDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        spin_maxSteps = new QSpinBox(MXtalPreoptConfigDialog);
        spin_maxSteps->setObjectName(QString::fromUtf8("spin_maxSteps"));
        spin_maxSteps->setMaximum(2500);

        gridLayout->addWidget(spin_maxSteps, 2, 1, 1, 1);

        label_2 = new QLabel(MXtalPreoptConfigDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(MXtalPreoptConfigDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 16, 0, 1, 2);

        label_6 = new QLabel(MXtalPreoptConfigDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 10, 0, 1, 1);

        spin_sCUpdateInterval = new QSpinBox(MXtalPreoptConfigDialog);
        spin_sCUpdateInterval->setObjectName(QString::fromUtf8("spin_sCUpdateInterval"));
        spin_sCUpdateInterval->setMaximum(20);

        gridLayout->addWidget(spin_sCUpdateInterval, 4, 1, 1, 1);

        label_5 = new QLabel(MXtalPreoptConfigDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 9, 0, 1, 1);

        spin_econv = new QSpinBox(MXtalPreoptConfigDialog);
        spin_econv->setObjectName(QString::fromUtf8("spin_econv"));
        spin_econv->setMinimum(-8);
        spin_econv->setMaximum(2);

        gridLayout->addWidget(spin_econv, 1, 1, 1, 1);

        spin_vdwCut = new QDoubleSpinBox(MXtalPreoptConfigDialog);
        spin_vdwCut->setObjectName(QString::fromUtf8("spin_vdwCut"));
        spin_vdwCut->setMaximum(50);

        gridLayout->addWidget(spin_vdwCut, 9, 1, 1, 1);

        spin_cutoffUpdateInterval = new QSpinBox(MXtalPreoptConfigDialog);
        spin_cutoffUpdateInterval->setObjectName(QString::fromUtf8("spin_cutoffUpdateInterval"));
        spin_cutoffUpdateInterval->setMaximum(20);

        gridLayout->addWidget(spin_cutoffUpdateInterval, 11, 1, 1, 1);

        cb_updateWithSc = new QCheckBox(MXtalPreoptConfigDialog);
        cb_updateWithSc->setObjectName(QString::fromUtf8("cb_updateWithSc"));

        gridLayout->addWidget(cb_updateWithSc, 12, 0, 1, 1);

        label_4 = new QLabel(MXtalPreoptConfigDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 11, 0, 1, 1);

        spin_eleCut = new QDoubleSpinBox(MXtalPreoptConfigDialog);
        spin_eleCut->setObjectName(QString::fromUtf8("spin_eleCut"));
        spin_eleCut->setMaximum(50);

        gridLayout->addWidget(spin_eleCut, 10, 1, 1, 1);

        line_3 = new QFrame(MXtalPreoptConfigDialog);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 13, 0, 1, 1);

        line = new QFrame(MXtalPreoptConfigDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 0, 1, 1);

        cb_debug = new QCheckBox(MXtalPreoptConfigDialog);
        cb_debug->setObjectName(QString::fromUtf8("cb_debug"));

        gridLayout->addWidget(cb_debug, 14, 0, 1, 1);

        line_2 = new QFrame(MXtalPreoptConfigDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 5, 0, 1, 1);

        label_3 = new QLabel(MXtalPreoptConfigDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_warning = new QLabel(MXtalPreoptConfigDialog);
        label_warning->setObjectName(QString::fromUtf8("label_warning"));
        label_warning->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_warning, 15, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(spin_econv);
        label_2->setBuddy(spin_maxSteps);
        label_6->setBuddy(spin_eleCut);
        label_5->setBuddy(spin_vdwCut);
        label_4->setBuddy(spin_cutoffUpdateInterval);
        label_3->setBuddy(spin_sCUpdateInterval);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(spin_econv, spin_maxSteps);
        QWidget::setTabOrder(spin_maxSteps, spin_sCUpdateInterval);
        QWidget::setTabOrder(spin_sCUpdateInterval, spin_vdwCut);
        QWidget::setTabOrder(spin_vdwCut, spin_eleCut);
        QWidget::setTabOrder(spin_eleCut, spin_cutoffUpdateInterval);
        QWidget::setTabOrder(spin_cutoffUpdateInterval, cb_updateWithSc);
        QWidget::setTabOrder(cb_updateWithSc, cb_debug);
        QWidget::setTabOrder(cb_debug, buttonBox);

        retranslateUi(MXtalPreoptConfigDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MXtalPreoptConfigDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MXtalPreoptConfigDialog, SLOT(reject()));
        QObject::connect(cb_updateWithSc, SIGNAL(toggled(bool)), spin_cutoffUpdateInterval, SLOT(setDisabled(bool)));
        QObject::connect(cb_updateWithSc, SIGNAL(toggled(bool)), label_4, SLOT(setDisabled(bool)));
        QObject::connect(spin_econv, SIGNAL(valueChanged(int)), label_warning, SLOT(show()));
        QObject::connect(spin_maxSteps, SIGNAL(valueChanged(int)), label_warning, SLOT(show()));
        QObject::connect(spin_sCUpdateInterval, SIGNAL(valueChanged(int)), label_warning, SLOT(show()));
        QObject::connect(spin_vdwCut, SIGNAL(valueChanged(double)), label_warning, SLOT(show()));
        QObject::connect(spin_eleCut, SIGNAL(valueChanged(double)), label_warning, SLOT(show()));
        QObject::connect(spin_cutoffUpdateInterval, SIGNAL(valueChanged(int)), label_warning, SLOT(show()));
        QObject::connect(cb_updateWithSc, SIGNAL(clicked()), label_warning, SLOT(show()));
        QObject::connect(cb_debug, SIGNAL(clicked()), label_warning, SLOT(show()));

        QMetaObject::connectSlotsByName(MXtalPreoptConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *MXtalPreoptConfigDialog)
    {
        MXtalPreoptConfigDialog->setWindowTitle(QApplication::translate("MXtalPreoptConfigDialog", "Preoptimization settings", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MXtalPreoptConfigDialog", "Energy convergence (kcal/mol):", 0, QApplication::UnicodeUTF8));
        spin_maxSteps->setSuffix(QApplication::translate("MXtalPreoptConfigDialog", " steps", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MXtalPreoptConfigDialog", "Max steps:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MXtalPreoptConfigDialog", "Electrostatic cutoff (\303\205):", 0, QApplication::UnicodeUTF8));
        spin_sCUpdateInterval->setSuffix(QApplication::translate("MXtalPreoptConfigDialog", " steps", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MXtalPreoptConfigDialog", "van der Waals cutoff:", 0, QApplication::UnicodeUTF8));
        spin_econv->setSuffix(QString());
        spin_econv->setPrefix(QApplication::translate("MXtalPreoptConfigDialog", "1e", 0, QApplication::UnicodeUTF8));
        spin_vdwCut->setSuffix(QApplication::translate("MXtalPreoptConfigDialog", " \303\205", 0, QApplication::UnicodeUTF8));
        spin_cutoffUpdateInterval->setSuffix(QApplication::translate("MXtalPreoptConfigDialog", " steps", 0, QApplication::UnicodeUTF8));
        cb_updateWithSc->setText(QApplication::translate("MXtalPreoptConfigDialog", "Update cutoffs only with supercell update", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MXtalPreoptConfigDialog", "Cutoff update interval:", 0, QApplication::UnicodeUTF8));
        spin_eleCut->setPrefix(QString());
        spin_eleCut->setSuffix(QApplication::translate("MXtalPreoptConfigDialog", " \303\205", 0, QApplication::UnicodeUTF8));
        cb_debug->setText(QApplication::translate("MXtalPreoptConfigDialog", "Verbose debugging (to terminal)", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MXtalPreoptConfigDialog", "Supercell update interval:", 0, QApplication::UnicodeUTF8));
        label_warning->setText(QApplication::translate("MXtalPreoptConfigDialog", "<html><head/><body><p><font color=\"red\">Changes will only apply to new structures.</font></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MXtalPreoptConfigDialog: public Ui_MXtalPreoptConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MXTALPREOPTCONFIGDIALOG_H
