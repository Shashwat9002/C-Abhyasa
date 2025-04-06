#include <iostream>
using namespace std;

// Function Declaration
int factorialN(int n){
    int factorial = 1;
    for(int i=1; i<=n; i++){
        factorial *= i;
    }

    return factorial;
}


// main function
int main()
{
    
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The factorial of number of  " << n << " is " << factorialN(n) <<endl;
    return 0;
}

/*
Syntax of Function

returnType functionName(parameterType parameterName)
{
    // function body
    return value;
}

*/