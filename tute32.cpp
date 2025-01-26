// Constructor with Data
#include <iostream>
using namespace std;

class simple
{
private:
    int data1, data2;

public:
    simple(int a, int b = 7)
    {
        data1 = a;
        data2 = b;

    }
    void print(void)
    {
        cout << "The value of Data1 and Data2 is: " << data1 << " , " << data2 << endl;
    }
};

int main()
{
    simple o(3);
    o.print();

    return 0;
}