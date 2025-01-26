// Inline function, Default arguments & constant argument
#include <iostream>
using namespace std;
// inline function >>>insert their code directly where they are called.Typically used for small function.

// inline int product(int a, int b)
// {
//     return a * b;
// }

// int product(int a, int b)
// {
// 'static' is not recomended to use below lines with inline function
//     static int c = 0; // This line Excute Only One Time
//     c = c + 1;// next time this function is run, the value of c will be retained
//     return a * b + c;
// }

// Default argument = (float facto=1.04)
float moneyrev(int currentmoney, float factor = 1.08)
{
    return currentmoney * factor;
}

int main()
{
    // int a, b;
    // cout << "enter first and second number :";
    // cin >> a >> b;

    int money;
    cout << "Enter money "<<endl;
    cin >> money;
    // cout << product(a, b) << endl;
    cout <<"Given money after one year "<< moneyrev(money); // default value
    return 0;
}