#include<iostream>
using namespace std;

double rectangle(double width, double length) {
    return width * length;
}

double square(double width) {
    return width * width;
}

double triangle(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    double area;
    double width;
    double height;
    double length;
    double base;
    cout << "Please select the area of the shape you want to calculate:"<<endl;
    cout << "1.rectangle"<<endl;
    cout << "2.square"<<endl;
    cout << "3.triangle"<<endl;
    cout << "4.Quit program"<<endl;
    cout<<"Enter selection:"<<endl;
    int choice;
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter width of the rectangle:"<<endl;
            cin >> width ;
            cout<<"Enter length of the rectangle:"<<endl;
			cin>> length;
            area = rectangle(width, length);
            cout << "Area of the rectangle: " << area << endl;
            break;
        case 2:
            cout << "Enter width of the square: ";
            cin >> width;
            area = square(width);
            cout << "Area of the square: " << area << endl;
            break;
        case 3:
            cout << "Enter base of the triangle: "<<endl;
            cin >> base; 
            cout << "Enter height of the triangle: "<<endl;
			cin>> height;
            area = triangle(base, height);
            cout << "Area of the triangle: " << area << endl;
            break;
        case 4:
        	break;
        default:
            cout << "you entered invalid input, please! enter the valid input" << endl;
            break;
    }

    return 0;
}
