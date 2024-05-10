#include "Triangle.h"

namespace shapes {
    Triangle::Triangle() {
        base = 0.0f;
        height = 0.0f;
    }

    Triangle::Triangle(float b, float h) {
        base = b;
        height = h;
    }

    Triangle::~Triangle() {
        // Destructor
    }

    void Triangle::setBase(float b) {
        base = b;
    }

    void Triangle::setHeight(float h) {
        height = h;
    }

    float Triangle::getBase() {
        return base;
    }

    float Triangle::getHeight() {
        return height;
    }
}
