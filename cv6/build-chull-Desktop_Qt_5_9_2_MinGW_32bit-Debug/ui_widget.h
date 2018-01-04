/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>
#include "draw.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    draw *mainW;
    QLabel *numberOfPoints;
    QSlider *horizontalSlider;
    QLabel *numberOfClusters;
    QSlider *horizontalSliderCl;
    QPushButton *grid;
    QPushButton *cluster;
    QPushButton *random;
    QPushButton *jarvis;
    QPushButton *qhull;
    QPushButton *incr;
    QLabel *pointsLabel;
    QLabel *clusterLabel;
    QLabel *labelTime;
    QLabel *labelProceed;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1127, 643);
        mainW = new draw(Widget);
        mainW->setObjectName(QStringLiteral("mainW"));
        mainW->setGeometry(QRect(20, 10, 951, 621));
        numberOfPoints = new QLabel(Widget);
        numberOfPoints->setObjectName(QStringLiteral("numberOfPoints"));
        numberOfPoints->setGeometry(QRect(984, 10, 131, 21));
        numberOfPoints->setAlignment(Qt::AlignCenter);
        horizontalSlider = new QSlider(Widget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(980, 40, 131, 21));
        horizontalSlider->setOrientation(Qt::Horizontal);
        numberOfClusters = new QLabel(Widget);
        numberOfClusters->setObjectName(QStringLiteral("numberOfClusters"));
        numberOfClusters->setGeometry(QRect(980, 90, 131, 21));
        numberOfClusters->setAlignment(Qt::AlignCenter);
        horizontalSliderCl = new QSlider(Widget);
        horizontalSliderCl->setObjectName(QStringLiteral("horizontalSliderCl"));
        horizontalSliderCl->setGeometry(QRect(980, 120, 131, 21));
        horizontalSliderCl->setOrientation(Qt::Horizontal);
        grid = new QPushButton(Widget);
        grid->setObjectName(QStringLiteral("grid"));
        grid->setGeometry(QRect(1000, 220, 93, 28));
        cluster = new QPushButton(Widget);
        cluster->setObjectName(QStringLiteral("cluster"));
        cluster->setGeometry(QRect(1000, 260, 93, 28));
        random = new QPushButton(Widget);
        random->setObjectName(QStringLiteral("random"));
        random->setGeometry(QRect(1000, 180, 93, 28));
        jarvis = new QPushButton(Widget);
        jarvis->setObjectName(QStringLiteral("jarvis"));
        jarvis->setGeometry(QRect(1000, 460, 93, 28));
        qhull = new QPushButton(Widget);
        qhull->setObjectName(QStringLiteral("qhull"));
        qhull->setGeometry(QRect(1000, 500, 93, 28));
        incr = new QPushButton(Widget);
        incr->setObjectName(QStringLiteral("incr"));
        incr->setGeometry(QRect(1000, 540, 93, 28));
        pointsLabel = new QLabel(Widget);
        pointsLabel->setObjectName(QStringLiteral("pointsLabel"));
        pointsLabel->setGeometry(QRect(980, 70, 131, 21));
        clusterLabel = new QLabel(Widget);
        clusterLabel->setObjectName(QStringLiteral("clusterLabel"));
        clusterLabel->setGeometry(QRect(980, 149, 131, 20));
        labelTime = new QLabel(Widget);
        labelTime->setObjectName(QStringLiteral("labelTime"));
        labelTime->setGeometry(QRect(990, 580, 131, 20));
        labelProceed = new QLabel(Widget);
        labelProceed->setObjectName(QStringLiteral("labelProceed"));
        labelProceed->setGeometry(QRect(980, 610, 131, 20));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "ConvexHull", Q_NULLPTR));
        numberOfPoints->setText(QApplication::translate("Widget", "Number of Points", Q_NULLPTR));
        numberOfClusters->setText(QApplication::translate("Widget", "Number of Clusters", Q_NULLPTR));
        grid->setText(QApplication::translate("Widget", "grid", Q_NULLPTR));
        cluster->setText(QApplication::translate("Widget", "cluster", Q_NULLPTR));
        random->setText(QApplication::translate("Widget", "random", Q_NULLPTR));
        jarvis->setText(QApplication::translate("Widget", "jarvis scan", Q_NULLPTR));
        qhull->setText(QApplication::translate("Widget", "quick hull", Q_NULLPTR));
        incr->setText(QApplication::translate("Widget", "incremental", Q_NULLPTR));
        pointsLabel->setText(QString());
        clusterLabel->setText(QString());
        labelTime->setText(QApplication::translate("Widget", "proceeding time [ms]", Q_NULLPTR));
        labelProceed->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
