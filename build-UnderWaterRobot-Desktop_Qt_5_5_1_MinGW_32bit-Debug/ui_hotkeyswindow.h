/********************************************************************************
** Form generated from reading UI file 'hotkeyswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTKEYSWINDOW_H
#define UI_HOTKEYSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_hotkeysWindow
{
public:
    QGridLayout *gridLayout;
    QPushButton *pitchUpHotkeyButton;
    QPushButton *turnLeftHotkeyButton;
    QPushButton *rollLeftHotkeyButton;
    QLabel *turnLeftLabel;
    QPushButton *straftRightHotkeyButton;
    QLabel *rollLeftLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *exitButton;
    QPushButton *turnRightHotkeyButton;
    QLabel *forwardLabel;
    QLabel *straftRightLabel;
    QPushButton *forwardHotkeyButton;
    QLabel *pitchUpLabel;
    QLabel *speedDecreaseLabel;
    QPushButton *downHotkeyButton;
    QLabel *straftLeftLabel;
    QLabel *rollRightLabel;
    QLabel *downLabel;
    QLabel *takePictureLabel;
    QPushButton *rollRightHotkeyButton;
    QPushButton *takePictureHotkeyButtton;
    QPushButton *backwardsHotkeyButton;
    QLabel *backwardsLabel;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *speedIncreaseLabel;
    QPushButton *speedIncreaseHotkeyButton;
    QLabel *turnRightLabel;
    QLabel *upLabel;
    QLabel *pitchDownLabel;
    QPushButton *upHotkeyButton;
    QPushButton *speedDecreaseHotkeyButton;
    QPushButton *pitchDownHotkeyButton;
    QPushButton *straftLeftHotkeyButton;
    QPushButton *pushButton;
    QPushButton *defaultKeysButton;

    void setupUi(QDialog *hotkeysWindow)
    {
        if (hotkeysWindow->objectName().isEmpty())
            hotkeysWindow->setObjectName(QStringLiteral("hotkeysWindow"));
        hotkeysWindow->resize(602, 372);
        gridLayout = new QGridLayout(hotkeysWindow);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pitchUpHotkeyButton = new QPushButton(hotkeysWindow);
        pitchUpHotkeyButton->setObjectName(QStringLiteral("pitchUpHotkeyButton"));

        gridLayout->addWidget(pitchUpHotkeyButton, 3, 1, 1, 1);

        turnLeftHotkeyButton = new QPushButton(hotkeysWindow);
        turnLeftHotkeyButton->setObjectName(QStringLiteral("turnLeftHotkeyButton"));

        gridLayout->addWidget(turnLeftHotkeyButton, 5, 5, 1, 1);

        rollLeftHotkeyButton = new QPushButton(hotkeysWindow);
        rollLeftHotkeyButton->setObjectName(QStringLiteral("rollLeftHotkeyButton"));

        gridLayout->addWidget(rollLeftHotkeyButton, 4, 5, 1, 1);

        turnLeftLabel = new QLabel(hotkeysWindow);
        turnLeftLabel->setObjectName(QStringLiteral("turnLeftLabel"));

        gridLayout->addWidget(turnLeftLabel, 5, 4, 1, 1);

        straftRightHotkeyButton = new QPushButton(hotkeysWindow);
        straftRightHotkeyButton->setObjectName(QStringLiteral("straftRightHotkeyButton"));

        gridLayout->addWidget(straftRightHotkeyButton, 1, 1, 1, 1);

        rollLeftLabel = new QLabel(hotkeysWindow);
        rollLeftLabel->setObjectName(QStringLiteral("rollLeftLabel"));

        gridLayout->addWidget(rollLeftLabel, 4, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        exitButton = new QPushButton(hotkeysWindow);
        exitButton->setObjectName(QStringLiteral("exitButton"));

        gridLayout->addWidget(exitButton, 6, 8, 1, 1);

        turnRightHotkeyButton = new QPushButton(hotkeysWindow);
        turnRightHotkeyButton->setObjectName(QStringLiteral("turnRightHotkeyButton"));

        gridLayout->addWidget(turnRightHotkeyButton, 5, 1, 1, 1);

        forwardLabel = new QLabel(hotkeysWindow);
        forwardLabel->setObjectName(QStringLiteral("forwardLabel"));

        gridLayout->addWidget(forwardLabel, 0, 0, 1, 1);

        straftRightLabel = new QLabel(hotkeysWindow);
        straftRightLabel->setObjectName(QStringLiteral("straftRightLabel"));

        gridLayout->addWidget(straftRightLabel, 1, 0, 1, 1);

        forwardHotkeyButton = new QPushButton(hotkeysWindow);
        forwardHotkeyButton->setObjectName(QStringLiteral("forwardHotkeyButton"));

        gridLayout->addWidget(forwardHotkeyButton, 0, 1, 1, 1);

        pitchUpLabel = new QLabel(hotkeysWindow);
        pitchUpLabel->setObjectName(QStringLiteral("pitchUpLabel"));

        gridLayout->addWidget(pitchUpLabel, 3, 0, 1, 1);

        speedDecreaseLabel = new QLabel(hotkeysWindow);
        speedDecreaseLabel->setObjectName(QStringLiteral("speedDecreaseLabel"));

        gridLayout->addWidget(speedDecreaseLabel, 1, 7, 1, 1);

        downHotkeyButton = new QPushButton(hotkeysWindow);
        downHotkeyButton->setObjectName(QStringLiteral("downHotkeyButton"));

        gridLayout->addWidget(downHotkeyButton, 2, 5, 1, 1);

        straftLeftLabel = new QLabel(hotkeysWindow);
        straftLeftLabel->setObjectName(QStringLiteral("straftLeftLabel"));

        gridLayout->addWidget(straftLeftLabel, 1, 4, 1, 1);

        rollRightLabel = new QLabel(hotkeysWindow);
        rollRightLabel->setObjectName(QStringLiteral("rollRightLabel"));

        gridLayout->addWidget(rollRightLabel, 4, 0, 1, 1);

        downLabel = new QLabel(hotkeysWindow);
        downLabel->setObjectName(QStringLiteral("downLabel"));

        gridLayout->addWidget(downLabel, 2, 4, 1, 1);

        takePictureLabel = new QLabel(hotkeysWindow);
        takePictureLabel->setObjectName(QStringLiteral("takePictureLabel"));

        gridLayout->addWidget(takePictureLabel, 2, 7, 1, 1);

        rollRightHotkeyButton = new QPushButton(hotkeysWindow);
        rollRightHotkeyButton->setObjectName(QStringLiteral("rollRightHotkeyButton"));

        gridLayout->addWidget(rollRightHotkeyButton, 4, 1, 1, 1);

        takePictureHotkeyButtton = new QPushButton(hotkeysWindow);
        takePictureHotkeyButtton->setObjectName(QStringLiteral("takePictureHotkeyButtton"));

        gridLayout->addWidget(takePictureHotkeyButtton, 2, 8, 1, 1);

        backwardsHotkeyButton = new QPushButton(hotkeysWindow);
        backwardsHotkeyButton->setObjectName(QStringLiteral("backwardsHotkeyButton"));

        gridLayout->addWidget(backwardsHotkeyButton, 0, 5, 1, 1);

        backwardsLabel = new QLabel(hotkeysWindow);
        backwardsLabel->setObjectName(QStringLiteral("backwardsLabel"));

        gridLayout->addWidget(backwardsLabel, 0, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 6, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 9, 1, 1);

        speedIncreaseLabel = new QLabel(hotkeysWindow);
        speedIncreaseLabel->setObjectName(QStringLiteral("speedIncreaseLabel"));

        gridLayout->addWidget(speedIncreaseLabel, 0, 7, 1, 1);

        speedIncreaseHotkeyButton = new QPushButton(hotkeysWindow);
        speedIncreaseHotkeyButton->setObjectName(QStringLiteral("speedIncreaseHotkeyButton"));

        gridLayout->addWidget(speedIncreaseHotkeyButton, 0, 8, 1, 1);

        turnRightLabel = new QLabel(hotkeysWindow);
        turnRightLabel->setObjectName(QStringLiteral("turnRightLabel"));

        gridLayout->addWidget(turnRightLabel, 5, 0, 1, 1);

        upLabel = new QLabel(hotkeysWindow);
        upLabel->setObjectName(QStringLiteral("upLabel"));

        gridLayout->addWidget(upLabel, 2, 0, 1, 1);

        pitchDownLabel = new QLabel(hotkeysWindow);
        pitchDownLabel->setObjectName(QStringLiteral("pitchDownLabel"));

        gridLayout->addWidget(pitchDownLabel, 3, 4, 1, 1);

        upHotkeyButton = new QPushButton(hotkeysWindow);
        upHotkeyButton->setObjectName(QStringLiteral("upHotkeyButton"));

        gridLayout->addWidget(upHotkeyButton, 2, 1, 1, 1);

        speedDecreaseHotkeyButton = new QPushButton(hotkeysWindow);
        speedDecreaseHotkeyButton->setObjectName(QStringLiteral("speedDecreaseHotkeyButton"));

        gridLayout->addWidget(speedDecreaseHotkeyButton, 1, 8, 1, 1);

        pitchDownHotkeyButton = new QPushButton(hotkeysWindow);
        pitchDownHotkeyButton->setObjectName(QStringLiteral("pitchDownHotkeyButton"));

        gridLayout->addWidget(pitchDownHotkeyButton, 3, 5, 1, 1);

        straftLeftHotkeyButton = new QPushButton(hotkeysWindow);
        straftLeftHotkeyButton->setObjectName(QStringLiteral("straftLeftHotkeyButton"));

        gridLayout->addWidget(straftLeftHotkeyButton, 1, 5, 1, 1);

        pushButton = new QPushButton(hotkeysWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 6, 7, 1, 1);

        defaultKeysButton = new QPushButton(hotkeysWindow);
        defaultKeysButton->setObjectName(QStringLiteral("defaultKeysButton"));

        gridLayout->addWidget(defaultKeysButton, 6, 5, 1, 1);


        retranslateUi(hotkeysWindow);
        QObject::connect(exitButton, SIGNAL(pressed()), hotkeysWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(hotkeysWindow);
    } // setupUi

    void retranslateUi(QDialog *hotkeysWindow)
    {
        hotkeysWindow->setWindowTitle(QApplication::translate("hotkeysWindow", "Dialog", 0));
        pitchUpHotkeyButton->setText(QApplication::translate("hotkeysWindow", "PushButton", 0));
        turnLeftHotkeyButton->setText(QApplication::translate("hotkeysWindow", "PushButton", 0));
        rollLeftHotkeyButton->setText(QApplication::translate("hotkeysWindow", "PushButton", 0));
        turnLeftLabel->setText(QApplication::translate("hotkeysWindow", "Turn Left:", 0));
        straftRightHotkeyButton->setText(QApplication::translate("hotkeysWindow", "PushButton", 0));
        rollLeftLabel->setText(QApplication::translate("hotkeysWindow", "Roll Left:", 0));
        exitButton->setText(QApplication::translate("hotkeysWindow", "Cancel", 0));
        turnRightHotkeyButton->setText(QApplication::translate("hotkeysWindow", "PushButton", 0));
        forwardLabel->setText(QApplication::translate("hotkeysWindow", "Forward:", 0));
        straftRightLabel->setText(QApplication::translate("hotkeysWindow", "Straft Right:", 0));
        forwardHotkeyButton->setText(QApplication::translate("hotkeysWindow", "PushButton", 0));
        pitchUpLabel->setText(QApplication::translate("hotkeysWindow", "Pitch Up:", 0));
        speedDecreaseLabel->setText(QApplication::translate("hotkeysWindow", "Speed Decrease:", 0));
        downHotkeyButton->setText(QApplication::translate("hotkeysWindow", "PushButton", 0));
        straftLeftLabel->setText(QApplication::translate("hotkeysWindow", "Straft Left:", 0));
        rollRightLabel->setText(QApplication::translate("hotkeysWindow", "Roll Right:", 0));
        downLabel->setText(QApplication::translate("hotkeysWindow", "Down:", 0));
        takePictureLabel->setText(QApplication::translate("hotkeysWindow", "Take Picture:", 0));
        rollRightHotkeyButton->setText(QApplication::translate("hotkeysWindow", "PushButton", 0));
        takePictureHotkeyButtton->setText(QApplication::translate("hotkeysWindow", "PushButton", 0));
        backwardsHotkeyButton->setText(QApplication::translate("hotkeysWindow", "PushButton", 0));
        backwardsLabel->setText(QApplication::translate("hotkeysWindow", "Backwards:", 0));
        speedIncreaseLabel->setText(QApplication::translate("hotkeysWindow", "Speed Increase:", 0));
        speedIncreaseHotkeyButton->setText(QApplication::translate("hotkeysWindow", "PushButton", 0));
        turnRightLabel->setText(QApplication::translate("hotkeysWindow", "Turn Right:", 0));
        upLabel->setText(QApplication::translate("hotkeysWindow", "Up:", 0));
        pitchDownLabel->setText(QApplication::translate("hotkeysWindow", "Pitch Down:", 0));
        upHotkeyButton->setText(QApplication::translate("hotkeysWindow", "PushButton", 0));
        speedDecreaseHotkeyButton->setText(QApplication::translate("hotkeysWindow", "PushButton", 0));
        pitchDownHotkeyButton->setText(QApplication::translate("hotkeysWindow", "PushButton", 0));
        straftLeftHotkeyButton->setText(QApplication::translate("hotkeysWindow", "PushButton", 0));
        pushButton->setText(QApplication::translate("hotkeysWindow", "Save", 0));
        defaultKeysButton->setText(QApplication::translate("hotkeysWindow", "Default Keys", 0));
    } // retranslateUi

};

namespace Ui {
    class hotkeysWindow: public Ui_hotkeysWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTKEYSWINDOW_H
