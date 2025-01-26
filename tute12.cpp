// Pointer in c++
#include <iostream>
using namespace std;

int main()
{
    int x = 20;
    int *y = &x;
    // & -- is a (address of) operator
    cout <<"The value  of x is "<< x<<endl;
    cout <<"The address of x is "<< &x<<endl;
    cout <<"The address of x is "<< y<<endl;
    // * -- is dereference operator
    cout <<"The value at address y is "<< *y<<endl;

    // // pointer to pointer
    // int **c = &y; //-------> it's store address of pointer
    // cout << "The address of y is " << &y << endl;
    // cout << "The address of y is " << c << endl;
    // cout << "The value at address c is " << *c << endl;
    // cout << "The value at address *c is " << **c << endl;
    return 0;
}