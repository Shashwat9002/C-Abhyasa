#include <iostream>
using namespace std;


int main() {
    char operator;
    int num1, num2;
    cout <<  "Addiation(A), Subtraction(S), Multiplication(M), Division(D)" << endl << "Enter Your Operation: ";
    cin >> operator;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    // Conditional Statements
    if (operator == 'A'){
        cout << "Sum of 2 numbers is " << num1 + num2 << ".\n";
    }
    else if (operator == 'S'){
        cout << "Difference of 2 numbers is " << num1 - num2 << ".\n";
    }
    else if (operator == 'M'){
        cout << "Product of 2 numbers is " << num1 * num2 << ".\n";
    }
    else if (operator == 'D'){
        cout << "Quotient of 2 numbers is " << (float)num1 /(float) num2 << ".\n";
    }else{
        cout << "Operation not correct...\n";
    }
    return 0;
}
