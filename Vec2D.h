//
// Created by itsag on 5/29/2024.
//

#ifndef VECTORS_VEC2D_H
#define VECTORS_VEC2D_H


#include<math.h>
#include <exception>
#include <iostream>

using namespace std;

class Vec2D {
public:
    Vec2D() : x(0.0), y(0.0) {};

    Vec2D(double valueX, double valueY) : x(valueX), y(valueY) {};

    double magnitude() {
        return std::sqrt((x * x) + (y * y));
    }

    void add(double vecX, double vecY) {
        try {
            Vec2D vector(vecX, vecY);
            x += vecX;
            y += vecY;
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }

    void substract(double vecX, double vecY) {
        try {
            Vec2D vector(vecX, vecY);
            x -= vecX;
            y -= vecY;
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }

private:
    double x;
    double y;
};


#endif //VECTORS_VEC2D_H
