
#include <iostream>
#include <limits> 
#include <sstream> 
using namespace std;

int main() {
    int number;
    string input;
    while (true) {
        cout << "Enter number between 5 and 10: "<<endl;
        cin >> input;
        stringstream ss(input);
        if (ss >> number) {
            if (number >= 5 && number <= 10) {
                cout << "Your input " << number << " has been accepted." << endl;
                break; // Exit the loop if input is valid
            } else {
                cout << "Sorry! You entered " << number << ". Please enter a number between 5 and 10." << endl;
            }
        } else {
            cout << "Sorry! You have entered invalid input. Please try again." << endl;
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        }
    }
    return 0;
}

