// Function Template overloading
#include <bits/stdc++.h>
using namespace std;

template <class T>
class tem
{
public:
    T data;
    tem(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void tem<T>::display()
{
    cout << data;
}

void funct(int a)
{
    cout << "First funct() -> " << a << endl;
}

template <class T>
void funct(T a)
{
    cout << "Template funct() -> " << a << endl;
}
int main()
{
    // tem<int> x(78);
    // tem<float> xy(7.8);
    // tem<char> xyz('v');
    // // cout <<xy.data<<endl;
    // xyz.display();
    
    funct(6); // Exact match take the highest priority
    funct(4.5);
    return 0;
}