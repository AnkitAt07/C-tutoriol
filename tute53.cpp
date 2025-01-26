#include <bits/stdc++.h>
using namespace std;

class A
{
private:
    int a;

public:
    A &setdata(int a)
    {
        this->a = a;
        return *this;
    }
    void getdata()
    {
        cout << "The value of a is : " << a << endl;
    }
};

int main()
{

    A a;
    a.setdata(9).getdata();

    return 0;
}



