#ifndef KOMMIVOYAGER_POINT_H
#define KOMMIVOYAGER_POINT_H

class Point{
private:
    double x, y; // x и y точки

public:
    Point();

    Point(double x_, double y_);

    // Возвращает указатель на x
    double& get_x();

    // Возвращает указатель на y
    double& get_y();
};

#endif //KOMMIVOYAGER_POINT_H
