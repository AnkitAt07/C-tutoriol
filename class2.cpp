#include <iostream>
using namespace std;

class rectangle
{

public:
    int length, width;

    rectangle() // Default constructor--->> No arguments passed
    {
        length = 0;
        width = 0;
    }

    rectangle(int x, int y) // parameterised constructor--->> Arguments passed
    {
        length = x;
        width = y;
    }

    rectangle(rectangle &r) // copy constructor --->> initilize an obj another existing obj
    {
        length = r.length;
        width = r.width;
    }
    // Destructor
    ~rectangle()
    {
        cout << "Destructor is called :" << endl;
    }
};

int main()
{
    rectangle r1(6,8);
    cout << r1.length << "  " << r1.width << endl;

    // rectangle *r1 = new rectangle();
    // cout << r1->length << "  " << r1->width << endl;
    // delete r1;

    rectangle r2(10, 8);
    cout << r2.length << "  " << r2.width << endl;

    rectangle r3 = r2;
    cout << r3.length << "  " << r3.width << endl;
    return 0;
}