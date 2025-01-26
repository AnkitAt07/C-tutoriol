#include <iostream>
using namespace std;

int main()
{
    // pointer ->
    int a = 23;
    int *ptr = &a;
    cout << "The value of a is :" << *(ptr) << endl; // a = 4
    cout << "The value of a is :" << a << endl;      // a = 4
    cout << "The value of a is :" << &a << endl;     // address of a


    // new operator
    float *p = new float(9.99);
    cout << "The value of a is :" << *(p) << endl;


    int *arr = new int[3];
    arr[0] = 20;
    *(arr + 1) = 33; // we can write
    arr[2] = 45;
    // delete[] arr;
    cout << "arr[0] is :" << arr[0] << endl;
    cout << "arr[1] is :" << arr[1] << endl;
    cout << "arr[2] is :" << arr[2] << endl;

    return 0;
}