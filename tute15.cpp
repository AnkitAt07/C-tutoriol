// FUNCTIONS********

#include <iostream>
using namespace std;
int sum(int a, int b) // Function definition
{
    int c = a * b;
    return c;
}
int main() // main function
{
    int x, y;
    cout << "Enter first number :";
    cin >> x;
    cout << "Enter second number :";
    cin >> y;
    sum(x, y); // Function calling
    cout << "The multiplication of a and b is: " << sum(x, y);
    return 0;
}