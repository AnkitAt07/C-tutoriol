#include <iostream>
using namespace std;
/*
    Syntax for initilization list in constructor
    constructor (argument - list (int a,int b)) : initilization section
    {
    assigment + other code ;
    }
*/
class test
{
    int a, b;

public:
    test(int i, int j) : a(i), b(j)
    // test(int i, int j) : b(j), a(i + b) // 'a gives Garbage value bcoz 'a is initilize first 
    // test(int i, int j) : a(i), b(2 * i)
    // test(int i, int j) : a(i), b(2 * j)
    // test(int i, int j) : a(i), b(a + j)
    // test(int i, int j) : a(i), b(i + j)
    {
        cout << "Constructor executed :" << endl;
        cout << "The value of a is:" << a << endl;
        cout << "The value of b is:" << b << endl;
    }
    // void display(void)
    // {
    //     cout << "The value of a is:" << a << endl;
    //     cout << "The value of b is:" << b << endl;
    // }
};
int main()
{
    test t(40, 35);
    // t.display();
    return 0;
}