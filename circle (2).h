#ifndef CIRCLE_H
#define CIRCLE_H

namespace shapes {
    class Circle {
    private:
        float radius;
    public:
        Circle(); // Default constructor
        Circle(float r); // Overloaded constructor
        ~Circle(); // Destructor
        void setRadius(float r); // Setter for radius
        float getRadius(); // Getter for radius
    };
}

#endif

