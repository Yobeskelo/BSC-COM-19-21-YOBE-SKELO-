#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;
public:
    Rectangle(); // Default constructor
    Rectangle(float l, float w); // Overloaded constructor
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

Rectangle::Rectangle(float l, float w) {
    length = l;
    width = w;
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
    
    Rectangle rect1;

    // Get length and width from user input for rect1
    float length1, width1;
    cout << "Enter length of the rectangle 1: ";
    cin >> length1;
    cout << "Enter width of the rectangle 1: ";
    cin >> width1;
    rect1.setLength(length1);
    rect1.setWidth(width1);

    // Output area of the rectangle 1
    cout << "Area of rectangle 1: " << rect1.calculateArea() << endl;

    // Create another rectangle object using the overloaded constructor
    float length2, width2;
    cout << "Enter length of the rectangle 2: ";
    cin >> length2;
    cout << "Enter width of the rectangle 2: ";
    cin >> width2;
    Rectangle rect2(length2, width2);

    
    cout << "Area of rectangle 2: " << rect2.calculateArea() << endl;

    return 0;
}
