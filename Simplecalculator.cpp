 //TASK 1 CODSOFT......

#include <iostream>
using namespace std;

void showChoices() {
}

int main() {
    double num1, num2, output;
    int choice;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    showChoices();
    cin >> choice;

    switch (choice) {
        case 1:
            output = num1 + num2;
            cout << "output: " << num1 << " + " << num2 << " = " << output << endl;
            break;
        case 2:
            output = num1 - num2;
            cout << "output: " << num1 << " - " << num2 << " = " << output << endl;
            break;
        case 3:
            output = num1 * num2;
            cout << "output: " << num1 << " * " << num2 << " = " << output << endl;
            break;
        case 4:
            if (num2 != 0) {
                output = num1 / num2;
                cout << "output: " << num1 << " / " << num2 << " = " << output << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid choice. Please select a valid operation (1-4)." << endl;
            break;
    }

    return 0;
}