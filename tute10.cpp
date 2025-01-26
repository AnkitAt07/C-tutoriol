// Loops
#include <iostream>
using namespace std;

int main()
{
    //********for loop*************
    int num, i;
    cout << "Enter a number :" << endl;
    cin >> num;
    for (i = 1; i <= num; i++) // for (initilization; condition; increament or decrement)
    {                          //   {
        cout << i << endl;     //      code........
    }                          //   }

    //while loop**************
    //printing 1 to 50 
    int x;
    cout <<"Enter a number which is less than 50: ";
    cin >>x;
    while (x<=50)
    {
        cout <<x <<endl;
        x++;
    }

    // do-while loop***************
    int a;
    cout <<"Enter a number : ";
    cin >>a;
    do
    {
        cout <<a <<endl;
        a++;
    }while (a<=50);
    // in do-while loop if condition is false the code will execute at least one time.
    return 0;
}