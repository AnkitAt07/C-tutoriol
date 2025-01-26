// Array
#include <iostream>
using namespace std;

int main()
{
    // int marks[] = {45, 36, 67, 13, 98};
    // // cout << marks[0] << endl;
    // // cout << marks[1] << endl;
    // // cout << marks[2] << endl;
    // // cout << marks[3] << endl;
    // // cout << marks[4] << endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<marks[i]<<endl;
    // }

    int n, i;
    cout << "enter size of array " << endl;
    cin >> n;
    int marks[n];
    for (i = 0; i < n; i++)
    {
        cin >> marks[i];
    }

    cout << "After taking input " << endl;
    for (i = 0; i < n; i++)
    {
        cout << marks[i] << endl;
    }

    // pointer and array
    int *p = marks;
    cout << "The value of *p is " << *p << endl;
    cout << "The value of *(p+1) is " << *(p + 1) << endl;
    cout << "The value of *(p+2) is " << *(p + 2) << endl;
    cout << "The value of *(p+3) is " << *(p + 3) << endl;
    cout << "The value of *(p+4) is " << *(p + 4) << endl;
    return 0;
}