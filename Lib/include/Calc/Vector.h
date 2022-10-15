#ifndef REALISTICMATGRAF_WEKTOR_H
#define REALISTICMATGRAF_WEKTOR_H

#include <cmath>
#include <cstdio>

class Vector {
private:
    float x{}, y{}, z{};

public:
    Vector(float x, float y, float z);
    Vector(const Vector& v);
    Vector();

    virtual ~Vector();

    [[nodiscard]] float angle(const Vector& v, int degrees = 0) const;
    [[nodiscard]] float length() const;
    void normalize();

    [[nodiscard]] Vector cross(const Vector& v) const;

    [[nodiscard]] Vector dot(const Vector& v) const;
    [[nodiscard]] float dotProduct(const Vector& v) const;

    void add(const Vector& v);
    void sub(const Vector& v);
    void mul(const float& factor);
    void div(const float& divisor);

    int isEqual(const Vector& v);

    [[nodiscard]] float getX() const;
    [[nodiscard]] float getY() const;
    [[nodiscard]] float getZ() const;

    void setXYZ(float newX, float newY, float newZ);
    void setX(float newX);
    void setY(float newY);
    void setZ(float newZ);

};

#endif //REALISTICMATGRAF_WEKTOR_H
