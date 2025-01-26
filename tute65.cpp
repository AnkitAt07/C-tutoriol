// Multi parameter template

#include <bits/stdc++.h>
using namespace std;

template <typename T1, typename T2>
class Pair
{
private:
    T1 first;
    T2 second;

public:
    Pair(T1 f, T2 s) : first(f), second(s) {} // we can write this
    // {
    //     first = f;
    //     second = s;
    // }

    void display() const
    {
        cout << "First number : " << first <<endl<< "Second number : " << second << endl;
    }
};

int main()
{
    Pair<int, float> myPair(11, 3.14);
    myPair.display();
    return 0;
}