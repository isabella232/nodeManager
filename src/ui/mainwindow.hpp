#pragma once

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class GraphicsScene;

class MainWindow : public QMainWindow {
        Q_OBJECT

    public:
        MainWindow( QWidget* parent = nullptr );
        ~MainWindow();

    private slots:
        void on_buttonAddNode_clicked();
        void on_actionQuit_triggered();

    private:
        Ui::MainWindow* ui;
        GraphicsScene* scene;
};
