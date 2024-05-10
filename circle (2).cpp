#include "Circle.h"

namespace shapes {
    Circle::Circle() {
        radius = 0.0f;
    }

    Circle::Circle(float r) {
        radius = r;
    }

    Circle::~Circle() {
        // Destructor
    }

    void Circle::setRadius(float r) {
        radius = r;
    }

    float Circle::getRadius() {
        return radius;
    }
}
