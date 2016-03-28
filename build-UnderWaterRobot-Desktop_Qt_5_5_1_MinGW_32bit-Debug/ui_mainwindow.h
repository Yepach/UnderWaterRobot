/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionHotkeys;
    QAction *actionSpeed;
    QAction *actionBattery_Life;
    QAction *actionPressure;
    QAction *actionTempurature;
    QAction *actionDepth;
    QAction *actionCamera_1;
    QAction *actionCamera_2;
    QAction *actionKeyboard;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelStatistics;
    QGridLayout *gridLayout;
    QLabel *labelStats1;
    QLabel *labelStats2;
    QSpacerItem *horizontalSpacer;
    QLabel *labelStatsValue8;
    QLabel *labelStatsValue7;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelStatsValue1;
    QLabel *labelStats9;
    QLabel *labelStats5;
    QLabel *labelStatsValue4;
    QLabel *labelStatsValue5;
    QFrame *line_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelStatsValue3;
    QLabel *labelStats4;
    QLabel *labelStatsValue2;
    QLabel *labelStats8;
    QLabel *labelStats6;
    QLabel *labelStats3;
    QLabel *labelStatsValue6;
    QLabel *labelStatsValue9;
    QLabel *labelStats7;
    QFrame *line;
    QHBoxLayout *horizontalLayout_other;
    QFrame *line_2;
    QProgressBar *progressBar;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelLeftMotorValue;
    QSlider *verticalSliderLeft;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelRearMotorValue;
    QSlider *verticalSliderBack;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelRightMotorValue;
    QSlider *verticalSliderRight;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelView;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelUpImage;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelLeftImage;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelForwardImage;
    QLabel *labelBackwardsImage;
    QLabel *labelRightImage;
    QHBoxLayout *horizontalLayout;
    QLabel *labelDownImage;
    QFrame *line_4;
    QMenuBar *menuBar;
    QMenu *menuSettings;
    QAction *action;
    QMenu *menuStatistics;
    QMenu *menuData;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(755, 487);
        actionHotkeys = new QAction(MainWindow);
        actionHotkeys->setObjectName(QStringLiteral("actionHotkeys"));
        actionSpeed = new QAction(MainWindow);
        actionSpeed->setObjectName(QStringLiteral("actionSpeed"));
        actionSpeed->setCheckable(true);
        actionBattery_Life = new QAction(MainWindow);
        actionBattery_Life->setObjectName(QStringLiteral("actionBattery_Life"));
        actionBattery_Life->setCheckable(true);
        actionPressure = new QAction(MainWindow);
        actionPressure->setObjectName(QStringLiteral("actionPressure"));
        actionPressure->setCheckable(true);
        actionTempurature = new QAction(MainWindow);
        actionTempurature->setObjectName(QStringLiteral("actionTempurature"));
        actionTempurature->setCheckable(true);
        actionDepth = new QAction(MainWindow);
        actionDepth->setObjectName(QStringLiteral("actionDepth"));
        actionDepth->setCheckable(true);
        actionCamera_1 = new QAction(MainWindow);
        actionCamera_1->setObjectName(QStringLiteral("actionCamera_1"));
        actionCamera_2 = new QAction(MainWindow);
        actionCamera_2->setObjectName(QStringLiteral("actionCamera_2"));
        actionKeyboard = new QAction(MainWindow);
        actionKeyboard->setObjectName(QStringLiteral("actionKeyboard"));
        actionKeyboard->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 10, 701, 401));
        verticalLayout = new QVBoxLayout(gridLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelStatistics = new QLabel(gridLayoutWidget);
        labelStatistics->setObjectName(QStringLiteral("labelStatistics"));

        verticalLayout->addWidget(labelStatistics);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelStats1 = new QLabel(gridLayoutWidget);
        labelStats1->setObjectName(QStringLiteral("labelStats1"));

        gridLayout->addWidget(labelStats1, 1, 1, 1, 1);

        labelStats2 = new QLabel(gridLayoutWidget);
        labelStats2->setObjectName(QStringLiteral("labelStats2"));

        gridLayout->addWidget(labelStats2, 1, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 3, 1, 1);

        labelStatsValue8 = new QLabel(gridLayoutWidget);
        labelStatsValue8->setObjectName(QStringLiteral("labelStatsValue8"));

        gridLayout->addWidget(labelStatsValue8, 3, 5, 1, 1);

        labelStatsValue7 = new QLabel(gridLayoutWidget);
        labelStatsValue7->setObjectName(QStringLiteral("labelStatsValue7"));

        gridLayout->addWidget(labelStatsValue7, 3, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 9, 1, 1);

        labelStatsValue1 = new QLabel(gridLayoutWidget);
        labelStatsValue1->setObjectName(QStringLiteral("labelStatsValue1"));

        gridLayout->addWidget(labelStatsValue1, 1, 2, 1, 1);

        labelStats9 = new QLabel(gridLayoutWidget);
        labelStats9->setObjectName(QStringLiteral("labelStats9"));

        gridLayout->addWidget(labelStats9, 3, 7, 1, 1);

        labelStats5 = new QLabel(gridLayoutWidget);
        labelStats5->setObjectName(QStringLiteral("labelStats5"));

        gridLayout->addWidget(labelStats5, 2, 4, 1, 1);

        labelStatsValue4 = new QLabel(gridLayoutWidget);
        labelStatsValue4->setObjectName(QStringLiteral("labelStatsValue4"));

        gridLayout->addWidget(labelStatsValue4, 2, 2, 1, 1);

        labelStatsValue5 = new QLabel(gridLayoutWidget);
        labelStatsValue5->setObjectName(QStringLiteral("labelStatsValue5"));

        gridLayout->addWidget(labelStatsValue5, 2, 5, 1, 1);

        line_3 = new QFrame(gridLayoutWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 6, 1, 1);

        labelStatsValue3 = new QLabel(gridLayoutWidget);
        labelStatsValue3->setObjectName(QStringLiteral("labelStatsValue3"));

        gridLayout->addWidget(labelStatsValue3, 1, 8, 1, 1);

        labelStats4 = new QLabel(gridLayoutWidget);
        labelStats4->setObjectName(QStringLiteral("labelStats4"));

        gridLayout->addWidget(labelStats4, 2, 1, 1, 1);

        labelStatsValue2 = new QLabel(gridLayoutWidget);
        labelStatsValue2->setObjectName(QStringLiteral("labelStatsValue2"));

        gridLayout->addWidget(labelStatsValue2, 1, 5, 1, 1);

        labelStats8 = new QLabel(gridLayoutWidget);
        labelStats8->setObjectName(QStringLiteral("labelStats8"));

        gridLayout->addWidget(labelStats8, 3, 4, 1, 1);

        labelStats6 = new QLabel(gridLayoutWidget);
        labelStats6->setObjectName(QStringLiteral("labelStats6"));

        gridLayout->addWidget(labelStats6, 2, 7, 1, 1);

        labelStats3 = new QLabel(gridLayoutWidget);
        labelStats3->setObjectName(QStringLiteral("labelStats3"));

        gridLayout->addWidget(labelStats3, 1, 7, 1, 1);

        labelStatsValue6 = new QLabel(gridLayoutWidget);
        labelStatsValue6->setObjectName(QStringLiteral("labelStatsValue6"));

        gridLayout->addWidget(labelStatsValue6, 2, 8, 1, 1);

        labelStatsValue9 = new QLabel(gridLayoutWidget);
        labelStatsValue9->setObjectName(QStringLiteral("labelStatsValue9"));

        gridLayout->addWidget(labelStatsValue9, 3, 8, 1, 1);

        labelStats7 = new QLabel(gridLayoutWidget);
        labelStats7->setObjectName(QStringLiteral("labelStats7"));

        gridLayout->addWidget(labelStats7, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        line = new QFrame(gridLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_other = new QHBoxLayout();
        horizontalLayout_other->setSpacing(6);
        horizontalLayout_other->setObjectName(QStringLiteral("horizontalLayout_other"));
        line_2 = new QFrame(gridLayoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_other->addWidget(line_2);

        progressBar = new QProgressBar(gridLayoutWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        horizontalLayout_other->addWidget(progressBar);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelLeftMotorValue = new QLabel(gridLayoutWidget);
        labelLeftMotorValue->setObjectName(QStringLiteral("labelLeftMotorValue"));

        verticalLayout_2->addWidget(labelLeftMotorValue, 0, Qt::AlignHCenter);

        verticalSliderLeft = new QSlider(gridLayoutWidget);
        verticalSliderLeft->setObjectName(QStringLiteral("verticalSliderLeft"));
        verticalSliderLeft->setOrientation(Qt::Vertical);

        verticalLayout_2->addWidget(verticalSliderLeft, 0, Qt::AlignHCenter);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2, 0, Qt::AlignHCenter);


        horizontalLayout_other->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        labelRearMotorValue = new QLabel(gridLayoutWidget);
        labelRearMotorValue->setObjectName(QStringLiteral("labelRearMotorValue"));

        verticalLayout_3->addWidget(labelRearMotorValue, 0, Qt::AlignHCenter);

        verticalSliderBack = new QSlider(gridLayoutWidget);
        verticalSliderBack->setObjectName(QStringLiteral("verticalSliderBack"));
        verticalSliderBack->setOrientation(Qt::Vertical);

        verticalLayout_3->addWidget(verticalSliderBack, 0, Qt::AlignHCenter);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3, 0, Qt::AlignHCenter);


        horizontalLayout_other->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        labelRightMotorValue = new QLabel(gridLayoutWidget);
        labelRightMotorValue->setObjectName(QStringLiteral("labelRightMotorValue"));

        verticalLayout_4->addWidget(labelRightMotorValue, 0, Qt::AlignHCenter);

        verticalSliderRight = new QSlider(gridLayoutWidget);
        verticalSliderRight->setObjectName(QStringLiteral("verticalSliderRight"));
        verticalSliderRight->setOrientation(Qt::Vertical);

        verticalLayout_4->addWidget(verticalSliderRight, 0, Qt::AlignHCenter);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_4->addWidget(label_4, 0, Qt::AlignHCenter);


        horizontalLayout_other->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        labelView = new QLabel(gridLayoutWidget);
        labelView->setObjectName(QStringLiteral("labelView"));

        verticalLayout_5->addWidget(labelView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelUpImage = new QLabel(gridLayoutWidget);
        labelUpImage->setObjectName(QStringLiteral("labelUpImage"));

        horizontalLayout_2->addWidget(labelUpImage, 0, Qt::AlignHCenter);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelLeftImage = new QLabel(gridLayoutWidget);
        labelLeftImage->setObjectName(QStringLiteral("labelLeftImage"));

        horizontalLayout_3->addWidget(labelLeftImage, 0, Qt::AlignLeft);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        labelForwardImage = new QLabel(gridLayoutWidget);
        labelForwardImage->setObjectName(QStringLiteral("labelForwardImage"));

        verticalLayout_6->addWidget(labelForwardImage, 0, Qt::AlignHCenter);

        labelBackwardsImage = new QLabel(gridLayoutWidget);
        labelBackwardsImage->setObjectName(QStringLiteral("labelBackwardsImage"));

        verticalLayout_6->addWidget(labelBackwardsImage, 0, Qt::AlignHCenter);


        horizontalLayout_3->addLayout(verticalLayout_6);

        labelRightImage = new QLabel(gridLayoutWidget);
        labelRightImage->setObjectName(QStringLiteral("labelRightImage"));

        horizontalLayout_3->addWidget(labelRightImage, 0, Qt::AlignRight);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelDownImage = new QLabel(gridLayoutWidget);
        labelDownImage->setObjectName(QStringLiteral("labelDownImage"));

        horizontalLayout->addWidget(labelDownImage, 0, Qt::AlignHCenter);


        verticalLayout_5->addLayout(horizontalLayout);


        horizontalLayout_other->addLayout(verticalLayout_5);

        line_4 = new QFrame(gridLayoutWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_other->addWidget(line_4);


        verticalLayout->addLayout(horizontalLayout_other);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 755, 21));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        action = new QAction(menuSettings);
        action->setObjectName(QStringLiteral("action"));
        menuStatistics = new QMenu(menuSettings);
        menuStatistics->setObjectName(QStringLiteral("menuStatistics"));
        menuData = new QMenu(menuBar);
        menuData->setObjectName(QStringLiteral("menuData"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuData->menuAction());
        menuSettings->addAction(menuStatistics->menuAction());
        menuSettings->addAction(actionCamera_1);
        menuSettings->addAction(actionCamera_2);
        menuSettings->addAction(actionKeyboard);
        menuSettings->addAction(actionHotkeys);
        menuStatistics->addAction(actionSpeed);
        menuStatistics->addAction(actionBattery_Life);
        menuStatistics->addAction(actionDepth);
        menuStatistics->addAction(actionPressure);
        menuStatistics->addAction(actionTempurature);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionHotkeys->setText(QApplication::translate("MainWindow", "Hotkeys", 0));
        actionSpeed->setText(QApplication::translate("MainWindow", "Speed", 0));
        actionBattery_Life->setText(QApplication::translate("MainWindow", "Battery Life", 0));
        actionPressure->setText(QApplication::translate("MainWindow", "Pressure", 0));
        actionTempurature->setText(QApplication::translate("MainWindow", "Tempurature", 0));
        actionDepth->setText(QApplication::translate("MainWindow", "Depth", 0));
        actionCamera_1->setText(QApplication::translate("MainWindow", "Camera 1", 0));
        actionCamera_2->setText(QApplication::translate("MainWindow", "Camera 2", 0));
        actionKeyboard->setText(QApplication::translate("MainWindow", "Keyboard", 0));
        labelStatistics->setText(QApplication::translate("MainWindow", "Statistics", 0));
        labelStats1->setText(QApplication::translate("MainWindow", "text", 0));
        labelStats2->setText(QApplication::translate("MainWindow", "text", 0));
        labelStatsValue8->setText(QApplication::translate("MainWindow", "num", 0));
        labelStatsValue7->setText(QApplication::translate("MainWindow", "num", 0));
        labelStatsValue1->setText(QApplication::translate("MainWindow", "num", 0));
        labelStats9->setText(QApplication::translate("MainWindow", "text", 0));
        labelStats5->setText(QApplication::translate("MainWindow", "text", 0));
        labelStatsValue4->setText(QApplication::translate("MainWindow", "num", 0));
        labelStatsValue5->setText(QApplication::translate("MainWindow", "num", 0));
        labelStatsValue3->setText(QApplication::translate("MainWindow", "num", 0));
        labelStats4->setText(QApplication::translate("MainWindow", "text", 0));
        labelStatsValue2->setText(QApplication::translate("MainWindow", "num", 0));
        labelStats8->setText(QApplication::translate("MainWindow", "text", 0));
        labelStats6->setText(QApplication::translate("MainWindow", "text", 0));
        labelStats3->setText(QApplication::translate("MainWindow", "text", 0));
        labelStatsValue6->setText(QApplication::translate("MainWindow", "num", 0));
        labelStatsValue9->setText(QApplication::translate("MainWindow", "num", 0));
        labelStats7->setText(QApplication::translate("MainWindow", "text", 0));
        labelLeftMotorValue->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Left Motor", 0));
        labelRearMotorValue->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Rear Motor", 0));
        labelRightMotorValue->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Right Motor", 0));
        labelView->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        labelUpImage->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        labelLeftImage->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        labelForwardImage->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        labelBackwardsImage->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        labelRightImage->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        labelDownImage->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        menuSettings->setTitle(QApplication::translate("MainWindow", "Settings", 0));
        menuStatistics->setTitle(QApplication::translate("MainWindow", "Statistics", 0));
        menuData->setTitle(QApplication::translate("MainWindow", "Data", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
