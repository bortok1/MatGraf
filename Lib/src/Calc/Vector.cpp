#include <cmath>

#include "Calc/Vector.h"

Vector::Vector(float x, float y, float z) : x(x), y(y), z(z) {}
Vector::Vector() = default;
Vector::Vector(const Vector &v) : x(v.x), y(v.y), z(v.z) {}

Vector::~Vector() = default;


float Vector::angle(const Vector &v, int degrees) const {
    double an = std::acos((this->dotProduct(v)) / (this->length() * v.length()));

    if (degrees)
        return float(an * 180 / M_PI);
    else
        return float(an);
}

float Vector::length() const {
    return std::sqrt(x*x + y*y + z*z);
}

void Vector::normalize() {
    float len = length();
    if (len != 0){
        this->div(len);
    }
    else
        printf("Can't divide by zero! [normalize]");
}



Vector Vector::cross(const Vector& v) const {
    return {this->y * v.z - this->z * v.y,
            this->z * v.x - this->x * v.z,
            this->x * v.y - this->y * v.x};

}



Vector Vector::dot(const Vector& v) const {
    Vector result;
    result.x = this->x * v.x;
    result.y = this->y * v.y;
    result.z = this->z * v.z;
    return result;
}

float Vector::dotProduct(const Vector& v) const {
    Vector result;
    result.x = this->x * v.x;
    result.y = this->y * v.y;
    result.z = this->z * v.z;
    return result.x + result.y + result.z;
}



void Vector::add(const Vector& v) {
    x += v.x;
    y += v.y;
    z += v.z;
}

void Vector::sub(const Vector& v) {
    x += v.x;
    y += v.y;
    z += v.z;
}

void Vector::mul(const float& factor) {
    x *= factor;
    y *= factor;
    z *= factor;
}

void Vector::div(const float& divisor) {
    if(divisor != 0) {
        x /= divisor;
        y /= divisor;
        z /= divisor;
    }
    else
        printf("Can't divide by zero! [div]");
}



int Vector::isEqual(const Vector &v) {
    if(x == v.x && y == v.y && z == v.z)
        return 1;
    return 0;
}



float Vector::getX() const {
    return x;
}

float Vector::getY() const {
    return y;
}

float Vector::getZ() const {
    return z;
}

void Vector::setXYZ(float newX, float newY, float newZ) {
    x = newX;
    y = newY;
    z = newZ;
}

void Vector::setX(float newX) {
    x = newX;
}

void Vector::setY(float newY) {
    y = newY;
}

void Vector::setZ(float newZ) {
    z = newZ;
}


