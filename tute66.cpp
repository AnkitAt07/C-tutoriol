#include <bits/stdc++.h>
using namespace std;

template <class T1 = int, class T2 = float> // default template
class boom
{
public:
    T1 a;
    T2 b;
    boom(T1 x, T2 z)
    {
        a = x;
        b = z;
    }
    void displayData()
    {
        cout << "The value of a is :" << a << endl;
        cout << "The value of b is :" << b << endl;
    }
};
int main()
{
    boom<> b(4, 4.999);
    b.displayData();
    cout << endl;
    boom<char, float> m('k', 9.88);
    m.displayData();
    return 0;
}