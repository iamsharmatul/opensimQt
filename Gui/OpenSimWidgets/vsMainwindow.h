#ifndef vsMainWindow_H
#define vsMainWindow_H

#include <QMainWindow>

#include <OpenSimWidgets/vsSimulationToolsWidget.h>
#include <Modeling/vsNavigatorModel.h>

QT_BEGIN_NAMESPACE
namespace Ui { class vsMainWindow; }
QT_END_NAMESPACE

class vsMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    vsMainWindow(QWidget *parent = nullptr);
    ~vsMainWindow();

private slots:
    void on_actionOpen_Model_triggered();

private:
    Ui::vsMainWindow *ui;
    vsSimulationToolsWidget *simulationWidget;
    vsNavigatorModel *navigatorModel;

    // QWidget interface
protected:
    virtual void dropEvent(QDropEvent *event) override;
    virtual void dragEnterEvent(QDragEnterEvent *event) override;
    virtual void dragMoveEvent(QDragMoveEvent *event) override;
};
#endif // vsMainWindow_H
