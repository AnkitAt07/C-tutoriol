// Classes, public and private access modifiers
#include <iostream>
using namespace std;

class student
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1);
    void getdata()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of d is " << d << endl;
        cout << "the value of e is " << e << endl;
    }
};

void student ::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    student piyush; // Here 'student' is class name  AND 'piyush' is object name :
    piyush.e = 45;
    piyush.d = 10;
    // piyush.a=2;  // can not do this bcoz a is private
    // piyush.b=20; // can not do this bcoz b is private
    // piyush.c=200;// can not do this bcoz c is private
    piyush.setdata(5, 15, 25);
    piyush.getdata();

    return 0;
}