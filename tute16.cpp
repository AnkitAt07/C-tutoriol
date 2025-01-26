// call by value and call by reference
#include <iostream>
using namespace std;

// call by reference by using function
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// using c++ reference variable
// int & swapreferenceVar(int &a, int &b)
void swapreferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    // return b;
}
int main()
{
    int x, y;
    cout << "Enter first number :";
    cin >> x;
    cout << "Enter second number :";
    cin >> y;
    cout << "The value of x is " << x << " The value of y is " << y << endl;
    // swap(&x, &y); //swap using pointer
    swapreferenceVar(x, y);
    // swapreferenceVar(x, y)=999;
    cout << "After swaping :" << endl
         << "The value of x is " << x << " The value of y is " << y << endl;

    return 0;
}

// call by value>>Passes a copy of variable to a function. Change inside the function don't affect the orignal.
// call by reference>>Passes the memory address of the variable. changes inside the function directly affect the orignal variable