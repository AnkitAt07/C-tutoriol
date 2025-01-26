// constructors
#include <iostream>
using namespace std;

class complex
{
    int x, y;

public:
    complex(void) // default constructors >> no arguments pass
    {
        x = 25;
        y = 50;
    }
    void print_data()
    {
        cout << "Your no is " << x << " + " << y << "i" << endl;
    }
};
int main()
{
    complex z;
    z.print_data();
    return 0;
}