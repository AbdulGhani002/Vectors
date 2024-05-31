//
// Created by itsag on 5/29/2024.
//

#ifndef VECTORS_Vec2DD_H
#define VECTORS_Vec2DD_H


#ifndef Vec2D_H
#define Vec2D_H

struct Vec2D {
    float x;
    float y;

    Vec2D();

    Vec2D(float x, float y);

    ~Vec2D() = default;

    void Add(const Vec2D &v);

    void Sub(const Vec2D &v);

    void Scale(const float n);

    Vec2D Rotate(const float angle) const;

    float Magnitude() const;

    float MagnitudeSquared() const;

    Vec2D &Normalize();

    Vec2D UnitVector() const;

    Vec2D Normal() const;

    float Dot(const Vec2D &v) const;

    float Cross(const Vec2D &v) const;
};

#endif


#endif //VECTORS_Vec2DD_H
