// OPERATOR IN C++
#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 6;
    // arthimatic operators + , - , * , / , % , a++ ,a--,++a,--a
    cout << "The value of a+b is =" << a + b << endl;
    cout << "The value of a-b is =" << a - b << endl;
    cout << "The value of a*b is =" << a * b << endl;
    cout << "The value of a/b is =" << a / b << endl;
    cout << "The value of a%b is =" << a % b << endl;
    cout << "The value of a++ is =" << a++ << endl;
    cout << "The value of a-- is =" << a-- << endl;
    cout << "The value of ++a is =" << ++a << endl;
    cout << "The value of --a is =" << --a << endl;

    // Assignment operators->> use to assign value to variable
    int x = 10, y = 20;
    char c = 'p';

    // Comparison operators ->  && and ||
    cout << ((a > b) && (b > a));
    cout << endl;
    cout << (a < b) || (b > a);
    return 0;
}