#include <QtWidgets/QWidget>
#include <QMouseEvent>
#include <QCursor>

private:
    Ui::FWindow *ui;
    QPointF old_pos;
    bool state = false;

    virtual void mousePressEvent(QMouseEvent* event);
    virtual void mouseMoveEvent(QMouseEvent* event);
    virtual void mouseReleaseEvent(QMouseEvent* event);

