#ifndef TASK6_POINT3D_H
#define TASK6_POINT3D_H


class Point3D {
    int _x;
    int _y;
    int _z;
public:
    Point3D(int x, int y, int z);
    Point3D(int x, int y);
    Point3D operator +(Point3D& other);
    Point3D operator -(Point3D& other);
    void operator +=(Point3D& other) { *this = *this + other; };
    void operator -=(Point3D& other) { *this = *this - other; };
    int Magnitude();
private:
    Point3D();
    Point3D(const Point3D&);
};


#endif //TASK6_POINT3D_H
