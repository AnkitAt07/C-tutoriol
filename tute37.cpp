/*Inheritance in c++
>Reusability is a very important feature of opps
>In c++ we can reuse a class and add additional feature to it
>Reusing classes saves time and money
>Reusing already tested and debugged class will save a lot of effort of developing and debugging the same thing again.
*/
#include <iostream>
using namespace std;

// Base class
class employee
{
public:
    int id;
    float salary;
    employee(int inpid)
    {
        id = inpid;
        salary = 145.34;
    }
    employee() {}
};
/*Derived class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Notes:
1. Default visibility mode is private
2.Private member are never inherited
3.Private visibility mode : Public member of the base class becomes public members of the derived class 
4.Public visibility mode : Public member of the base class becomes private members of the base class 
*/
// Creating a derived class feom employee base class
class programmer : public employee
{
public:
    programmer(int uid)
    {
        id = uid;
    }
    int languagecode = 9;
    void getdata()
    {
        cout << id << endl;
    }
};
int main()
{
    employee shyam(1), mohan(2);
    cout << shyam.salary << endl;
    // cout << mohan.salary << endl;
    programmer skillF(19);
    cout << skillF.languagecode << endl;
    cout<<skillF.id<<endl;   
    skillF.getdata();
    return 0;
}