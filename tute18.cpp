// Recursion ->-> function calling it self
#include <iostream>
using namespace std;

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

int fibonacci(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}
int main()
{
    int number;
    cout << "Enter a num:";
    cin >> number;
    cout << "Factorial of given number is = " << factorial(number);
    cout << endl;
    int n;
    cout << "Enter a number :" << endl;
    cin >> n;
    cout << "The fibonacci sequence at position " << n << " is " << fibonacci(n) << endl;

    return 0;
}