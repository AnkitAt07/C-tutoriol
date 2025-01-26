#include <iostream>
using namespace std;

class base1
{
    int data1;

public:
    base1(int i)  // constructor
    {
        data1 = i;
        cout << "Base1 class constructor called :" << endl;
    }

    void printdata1(void)
    {
        cout << "The value of data1 is :" << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called :" << endl;
    }

    void printdata2(void)
    {
        cout << "The value of data2 is :" << data2 << endl;
    }
};

class derived : public base1, public base2
{

    int der1, der2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        der1 = c;
        der2 = d;
        cout << "derived class constructor called :" << endl;
    }
    void printdatader(void)
    {
        cout << "The value of der1,der2 is :" << der1 << ","
             << der2 << endl;
    }
};
int main()
{

    derived ankit(1, 2, 3, 4);
    ankit.printdata1();
    ankit.printdata2();
    ankit.printdatader();
    return 0;
}