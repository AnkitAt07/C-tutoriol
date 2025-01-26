// Single Inheritance
#include <iostream>
using namespace std;

class student
{
    int data1; // private members

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void student ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}

int student ::getdata1()
{
    return data1;
}

int student ::getdata2()
{
    return data2;
}

//  derived  base class name
class boys : private student
{
    int data3;

public:
    void process();
    void display();
};

void boys ::process(void)
{
    // setdata();
    data3 = data2 * getdata1();
}

void boys ::display()
{
    cout << "value of data1 is " << getdata1() << endl;
    cout << "value of data2 is " << data2 << endl;
    cout << "value of data3 is " << data3 << endl;
}

int main()
{
    boys boy;
    // boy.setdata(); //Can't do this bcoz student class is being private 
    boy.process();
    boy.display();
    return 0;
}