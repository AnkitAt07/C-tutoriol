// CONSTANTS,MANIPUlATOR,AND,OPERATORS,PRECEDENCE_
#include <iostream>
#include <iomanip> // This header file for manipulators
using namespace std;

int main()
{
    //**********constant**********
    const float pi = 3.1415;
    // pi = 3.14155; //cannot do this bcoz 'pi' is constant
    cout << "The value of pi is " << pi << endl;

    // **********Manipulators*********
    int a = 2, b = 34, c = 1122;
    cout << "The value of a without setw :" << a << endl;
    cout << "The value of b without setw :" << b << endl;
    cout << "The value of c without setw :" << c << endl
         << endl;
    cout << "The value of a is :" << setw(4) << a << endl;
    cout << "The value of b is :" << setw(4) << b << endl;
    cout << "The value of c is :" << setw(4) << c << endl;

    // **********Operators Precedence**********

    return 0;
}