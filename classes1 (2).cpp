#include <iostream>
using namespace std;


class Rectangle {
private:
    float length;
    float width;
public:
    Rectangle(); // Default constructor
    ~Rectangle(); // Destructor
    void setLength(float l); // Setter for length
    void setWidth(float w); // Setter for width
    float getLength(); // Getter for length
    float getWidth(); // Getter for width
    float calculateArea(); // Calculate area
};


Rectangle::Rectangle() {
    length = 0.0f;
    width = 0.0f;
}

Rectangle::~Rectangle() {
    // Destructor
}

void Rectangle::setLength(float l) {
    length = l;
}

void Rectangle::setWidth(float w) {
    width = w;
}

float Rectangle::getLength() {
    return length;
}

float Rectangle::getWidth() {
    return width;
}

float Rectangle::calculateArea() {
    return length * width;
}


int main() {
    Rectangle rect; // i am creating a rectangle object using default constructor

    // let the user enter input
    float length, width;
    std::cout << "Enter length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter width of the rectangle: ";
    std::cin >> width;

    // Set length and width using setter methods
    rect.setLength(length);
    rect.setWidth(width);

    // Output area of the rectangle
    std::cout << "Area of the rectangle: " << rect.calculateArea() << std::endl;

    return 0;
}
