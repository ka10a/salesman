#include "Point.h"

Point::Point() {}

Point::Point(double x_, double y_){
    x = x_;
    y = y_;
}

double& Point::get_x(){
    return x;
}

double& Point::get_y() {
    return y;
}
