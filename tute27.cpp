// friend class
#include <iostream>
using namespace std;

// forward declaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealcomplex(complex, complex);
    int sumimgcomplex(complex, complex);
};

class complex
{
    int a, b;

public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void print()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
    friend int calculator::sumRealcomplex(complex o1, complex o2);
    friend int calculator ::sumimgcomplex(complex o1, complex o2);
    // friend class calculator ;
};

int calculator ::sumRealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumimgcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex c1, c2;
    c1.setdata(2, 3);
    c1.print();
    c2.setdata(4, 6);
    c2.print();

    calculator calc;
    int result = calc.sumRealcomplex(c1, c2);
    cout << "The sum of real part is " << result << endl;

    int resultk = calc.sumimgcomplex(c1, c2);
    cout << "The sum of imaginary part is " << resultk << "i" << endl;

    return 0;
}