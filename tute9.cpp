// IF-ELSE CONTROL STRUCTURE
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "What is your age :" << endl;
    cin >> age;
    if (age < 18)
    {
        cout << "you can't come :" << endl;
    }

    else if (age == 18)
    {
        cout << "Get a pass:" << endl;
    }
    else
    {
        cout << "You will come:" << endl;
    }

    //*****Selection control structure   Switch Case *****
    cout <<"What is your age :"<<endl;
    cin >>age;
    switch (age)
    {
    case 18:
        cout << "your age is 18:"<<endl;
        break;

    case 25:
        cout << "your age is 25:"<<endl;
        break;

    case 10:
        cout << "your age is 10:"<<endl;
        break;

    default:
        cout << "NO spacial case:"<<endl;
        break;
    }
    return 0;
}