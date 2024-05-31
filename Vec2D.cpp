//
// Created by itsag on 5/29/2024.
//

#include "Vec2D.h"
#include <math.h>

Vec2D::Vec2D(): x(0.0), y(0.0) {}

Vec2D::Vec2D(float x, float y): x(x), y(y) {}

void Vec2D::Add(const Vec2D& v) {
    x += v.x;
    y += v.y;
}

void Vec2D::Sub(const Vec2D& v) {
    x -= v.x;
    y -= v.y;
}

void Vec2D::Scale(const float n) {
    x *= n;
    y *= n;
}

Vec2D Vec2D::Rotate(const float angle) const {
    Vec2D result;
    result.x = x * cos(angle) - y * sin(angle);
    result.y = x * sin(angle) + y * cos(angle);
    return result;
}

float Vec2D::Magnitude() const {
    return sqrtf(x * x + y * y);
}

float Vec2D::MagnitudeSquared() const {
    return (x * x + y * y);
}

Vec2D& Vec2D::Normalize() {
    float length = Magnitude();
    if (length != 0.0) {
        x /= length;
        y /= length;
    }
    return *this;
}

Vec2D Vec2D::UnitVector() const {
    Vec2D result = Vec2D(0, 0);
    float length = Magnitude();
    if (length != 0.0) {
        result.x = x / length;
        result.y = y / length;
    }
    return result;
}

Vec2D Vec2D::Normal() const {
    return Vec2D(y, -x).Normalize();
}

float Vec2D::Dot(const Vec2D& v) const {
    return (x * v.x) + (y * v.y);
}

float Vec2D::Cross(const Vec2D& v) const {
    return (x * v.y) - (y * v.x);
}