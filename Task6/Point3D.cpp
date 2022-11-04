#include "Point3D.h"
#include <cmath>

Point3D::Point3D(int x, int y, int z) {
    _x = x;
    _y = y;
    _z = z;
}

Point3D::Point3D(int x, int y) {
    _x = x;
    _y = y;
    _z = 0;
}

Point3D Point3D::operator+(Point3D &other) {
    Point3D resPoint(_x + other._x, _y + other._y, _z + other._z);
    return resPoint;
}

Point3D Point3D::operator-(Point3D &other) {
    Point3D resPoint(_x - other._x, _y - other._y, _z - other._z);
    return resPoint;
}

int Point3D::Magnitude() {
    return std::sqrt(_x*_x + _y*_y + _z*_z);
}