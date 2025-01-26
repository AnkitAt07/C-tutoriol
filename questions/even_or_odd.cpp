#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number :" << endl;
    cin >> number;
    if (number % 2 == 0)
    {
        cout << "The given number is even :";
    }
    else
    {
        cout << "The given number is odd :";
    }

    return 0;
}