// using 'Friend' keywords
#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void print_data()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
    friend complex sum(complex obj1, complex obj2);
};
complex sum(complex obj1, complex obj2)
{
    complex obj3;
    obj3.setdata((obj1.a + obj2.a), (obj1.b + obj2.b));
    return obj3;
}
int main()
{
    complex c1, c2, x;
    c1.setdata(2, 7);
    c1.print_data();

    c2.setdata(3, 3);
    c2.print_data();

    x = sum(c1, c2);
    x.print_data(); 
    return 0;
}

/*properties of friend function
1. Not in the scope of class
2. Since it is not in the scope of the class , it can not be called from the object of that class " INVALID "
3.can be invoke without the help of any object
4. Usally contains the object as argument
5. can be declare inside public or private section of the class
*/