#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mapView_ = new QQuickView();
    mapWidget_ = QWidget::createWindowContainer(mapView_, this);

    ui->map_gridLayout->addWidget(mapWidget_);
    mapView_->setSource(QUrl(QStringLiteral("./map.qml")));
    mapView_->setResizeMode(QQuickView::SizeRootObjectToView);
}

MainWindow::~MainWindow()
{
    delete ui;
}

