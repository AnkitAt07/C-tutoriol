// Typecasting and Reference variable
#include <iostream>
using namespace std;

int main()
{
    float x = 3.465; // Orignal variable
    float &y = x;    // Reference variable
    // y = 77.88;
    cout << x << endl;  // Value of x
    cout << y << endl;  // Value of x
    cout << &x << endl; // Address of x
    cout << &y;         // Address of x
    return 0;
}