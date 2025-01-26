#include <iostream>
using namespace std;

class base1
{
protected:
    int base_1_int;

public:
    void set_base_1_int(int a)
    {
        base_1_int = a;
    }
};

class base2
{
protected:
    int base_2_int;

public:
    void set_base_2_int(int a)
    {
        base_2_int = a;
    }
};

class derived : public base1, public base2
{
public:
    void show_data()
    {
        cout << "The value of base_1_int is :" << base_1_int << endl;
        cout << "The value of base_2_int is :" << base_2_int << endl;
        cout << "The sum of these value is :" << base_1_int + base_2_int << endl;
    }
};
int main()
{
    derived value;
    value.set_base_1_int(45);
    value.set_base_2_int(35);
    value.show_data();
    return 0;
}