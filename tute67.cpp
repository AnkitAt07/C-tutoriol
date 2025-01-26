// Function Template
#include <bits/stdc++.h>
using namespace std;

template <class x, class y, class z>
float avge(x n1, y n2, z n3)
{
    float avg = (n1 + n2 + n3) / 2.0;
    return avg;
}
int main()
{
    float a = avge(5.6, 4.1, 4);
    cout << "The average is = " << a;

    return 0;
}