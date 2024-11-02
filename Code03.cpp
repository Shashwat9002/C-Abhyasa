#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter your character: ";
    cin >> ch;
    cout << "Your character take " << sizeof(ch) << " bytes\n";
    if (ch >= 'a' && ch <= 'z'){
        cout << "Your character '" << ch << "' is in Lowercase.\n";
    }else{
        cout << "Your character '" << ch << "' is in Uppercase.\n";
    }
    cout << "Thanks for using !!!\n";
    return 0;
}