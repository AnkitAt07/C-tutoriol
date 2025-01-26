// Constructor overloading
#include <iostream>
using namespace std;

class stu
{
private:
    int a, b;

public:
    stu(int x, int y)
    {
        a = x;
        b = y;
    }
    stu(int x)
    {
        a = x;
        b = 0;
    }

    void print_data()
    {
        cout << a << " + " << b << "i " << endl;
    }
};
int main()
{
    stu c1(5, 10);
    c1.print_data();

    stu c2(10);
    c2.print_data();
    return 0;
}