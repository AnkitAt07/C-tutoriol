// OOPs recap & Nesting of member Function
// OOPs ___ classes and object
// c++ ---> initially called --> C with classes by stroustroup
// class--> extension o structure (in c)
// structure had limitation
//          -->members are public
//          --> NO methods
// classes == structures + more
// classes can have methods and properties
// classes --> can make few members as private & public
// structures in c++ are typedefed
// you can declare object along with class declaration like thisn
/*class employee
{
    // class defination
} piyush, ankit, raju;    // valid syntax*/
// Nesting of member functions
#include <bits/stdc++.h>
using namespace std;

class binary
{
private:
    string s;

public:
    void read(void)
    {
        cout << "Enter a binary number :" << endl;
        cin >> s;
    }

    void check_binary(void)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != '0' && s[i] != '1')
            {
                cout << "incorrect binary format :" << endl;
                exit(0);
            }
        }
    }

    void once(void)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                s[i] = '1';
            }
            else
            {
                s[i] = '0'; // we can use s.at(i) also
            }
        }
    }
    void display(void);
};

void binary ::display(void)
{
    cout << "displaying your binary number :" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{

    binary b;
    b.read();
    b.check_binary();
    // b.display();
    b.once();
    b.display();
    return 0;
}