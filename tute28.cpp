#include <iostream>
using namespace std;

class y;  // Forward declaration 
class x
{
    int data;

public:
    void setdata(int value)
    {
        data = value;
    }
    friend void add(x, y);
};

class y
{
    int num;

public:
    void setdata(int value)
    {
        num = value;
    }
    friend void add(x, y);
};

void add(x o1, y o2)
{
    cout << "the sum of x and y class is " << o1.data + o2.num << endl;
}
int main()
{
    x a1;
    y a2;
    a1.setdata(5);
    a2.setdata(10);
    add(a1, a2);
    return 0;
}