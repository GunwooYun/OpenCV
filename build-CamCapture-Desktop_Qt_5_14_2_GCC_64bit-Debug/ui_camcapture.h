/********************************************************************************
** Form generated from reading UI file 'camcapture.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMCAPTURE_H
#define UI_CAMCAPTURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CamCapture
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *pLabelCamView;
    QPushButton *pPBCamPlay;
    QPushButton *pPBSnapShot;

    void setupUi(QWidget *CamCapture)
    {
        if (CamCapture->objectName().isEmpty())
            CamCapture->setObjectName(QString::fromUtf8("CamCapture"));
        CamCapture->resize(650, 550);
        verticalLayout = new QVBoxLayout(CamCapture);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pLabelCamView = new QLabel(CamCapture);
        pLabelCamView->setObjectName(QString::fromUtf8("pLabelCamView"));
        pLabelCamView->setPixmap(QPixmap(QString::fromUtf8("../build-CamCapture-Desktop_Qt_5_14_2_GCC_64bit-Debug/camtest.png")));

        verticalLayout->addWidget(pLabelCamView);

        pPBCamPlay = new QPushButton(CamCapture);
        pPBCamPlay->setObjectName(QString::fromUtf8("pPBCamPlay"));
        pPBCamPlay->setCheckable(true);
        pPBCamPlay->setChecked(false);

        verticalLayout->addWidget(pPBCamPlay);

        pPBSnapShot = new QPushButton(CamCapture);
        pPBSnapShot->setObjectName(QString::fromUtf8("pPBSnapShot"));

        verticalLayout->addWidget(pPBSnapShot);


        retranslateUi(CamCapture);

        QMetaObject::connectSlotsByName(CamCapture);
    } // setupUi

    void retranslateUi(QWidget *CamCapture)
    {
        CamCapture->setWindowTitle(QCoreApplication::translate("CamCapture", "CamCapture", nullptr));
        pLabelCamView->setText(QString());
        pPBCamPlay->setText(QCoreApplication::translate("CamCapture", "CamPlay", nullptr));
        pPBSnapShot->setText(QCoreApplication::translate("CamCapture", "SnapShot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CamCapture: public Ui_CamCapture {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMCAPTURE_H
