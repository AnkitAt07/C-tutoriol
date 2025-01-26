// Our first template
#include <bits/stdc++.h>
using namespace std;

template <class T>
class vctor
{
public:
    T *arr;
    int size;

    vctor(int m)
    {
        size = m;
        arr = new T[size];
    }
    T sum(vctor &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vctor<float> v1(2);
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;

    vctor<float> v2(2);
    v2.arr[0] = 0.1;
    v2.arr[1] = 1.80;


    float a = v1.sum(v2);
    cout << a << endl;
    return 0;
}

// #include <iostream>
// using namespace std;

// class MyVector {
// public:
//     int *arr;
//     int size;

//     MyVector(int m) {
//         size = m;
//         arr = new int[size];
//     }

//     int sum(MyVector &v) {
//         int d = 0;
//         for (int i = 0; i < size; i++) {
//             d += this->arr[i] * v.arr[i];
//         }
//         return d;
//     }
// };

// int main() {
//     MyVector v1(3);
//     v1.arr[0] = 4;
//     v1.arr[1] = 3;
//     v1.arr[2] = 1;

//     MyVector v2(3);
//     v2.arr[0] = 1; 
//     v2.arr[1] = 0; 
//     v2.arr[2] = 1;

//     int a = v1.sum(v2);
//     cout << a << endl;

//     return 0;
// }
