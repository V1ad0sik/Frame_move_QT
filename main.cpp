

void FWindow::mousePressEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton) {

        int x = this -> geometry().x();
        int y = this -> geometry().y();

        int cursor_x = QCursor:: pos().x();
        int cursor_y = QCursor:: pos().y();

        if (x <= cursor_x <= x + this -> geometry().width())
        {
            if(y <= cursor_y <= y + this -> geometry().height())
            {
                this -> old_pos = event->pos();
                this -> state = true;
            }

            else {this -> state = false;}
        }

    }

    if (event->button() == Qt::RightButton) {this -> state = false;}
}

void FWindow::mouseReleaseEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton) {this -> state = false;}
}


void FWindow::mouseMoveEvent(QMouseEvent* event)
{
    if(this -> state == false) {return;}

    const QPointF delta = event -> pos() - this -> old_pos;
    move(x() + delta.x(), y() + delta.y());
    //move(this -> pos() + delta);
}