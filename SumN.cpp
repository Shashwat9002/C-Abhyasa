#include <iostream>
using namespace std;

// Function Declaration
int sumN(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }

    return sum;
}


// main function
int main()
{
    
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The sum of numbers till " << n << " is " << sumN(n) <<endl;
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