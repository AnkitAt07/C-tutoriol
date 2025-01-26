// Local & global variable
#include <iostream>
using namespace std;

int global = 90;
void sum()
{
    int a;
    cout << global;
}
int main()
{
    int a = 20, b = 45;
    int global = 10;
    bool c = a>b;  // if true -> 1, if false -> 0
    bool d = a<b; // if true -> 1, if false -> 0
    global = 35;    // now global variable is 35
    cout << global << endl
         << c << endl
         << d;
    cout << "\nThe value of a is " << a << endl
         << "The value of b is " << b;
    sum();
    return 0;
}