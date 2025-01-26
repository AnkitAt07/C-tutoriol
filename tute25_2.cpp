#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setdataBysum(complex obj1, complex obj2)
    {
        a = obj1.a + obj2.a;
        b = obj1.b + obj2.b;
    }
    void print()
    {
        cout << "The complex number is " << a << "+" << b << "i" << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setdata(3, 8);
    c1.print();

    c2.setdata(5, 6);
    c2.print();

    c3.setdataBysum(c1, c2);
    c3.print();
    return 0;
}