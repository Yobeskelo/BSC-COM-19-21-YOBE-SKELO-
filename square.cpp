#include "Square.h"

namespace shapes {
    Square::Square() {
        sideLength = 0.0f;
    }

    Square::Square(float length) {
        sideLength = length;
    }

    Square::~Square() {
        // Destructor
    }

    void Square::setSideLength(float length) {
        sideLength = length;
    }

    float Square::getSideLength() {
        return sideLength;
    }
}
