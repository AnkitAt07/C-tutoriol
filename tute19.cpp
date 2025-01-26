// Function overloading>>>> Allow you to define multiple function with the same name but different parameters lists.
#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

int sum(int a, int b, int d, int x)
{
    return a + (b * d) + x;
}
int main()
{
    cout << "The sum of 10 and 15 is " << sum(10, 15) << endl;
    cout << "The sum of 10,13 and 15 is " << sum(10, 15, 20) << endl;
    cout << "The value sum of 10,13 and 15 is " << sum(10, 15, 20, 25) << endl;
    return 0;
}