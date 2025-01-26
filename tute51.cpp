// pointer to objects
#include <iostream>
using namespace std;

class complex
{
    int real, img;

public:
    void getdata()
    {
        cout << "The real part is : " << real << endl;
        cout << "The img part is : " << img << endl;
    }

    void setdata(int a, int b)
    {
        real = a;
        img = b;
    }
};

int main()
{
    // complex cl1;
    // complex *ptr = &cl1;
    // cl1.setdata(34, 58);
    // cl1.getdata();
    // OR
    complex *ptr = new complex;
    // (*ptr).setdata(34, 58);
    ptr->setdata(56, 45); // we can write
    ptr->getdata();

    // // Array of object
    // complex *ptr1 = new complex[4];
    // // (*ptr).setdata(34, 58);
    // ptr1->setdata(5, 4);
    // ptr1->getdata();
    return 0;
}