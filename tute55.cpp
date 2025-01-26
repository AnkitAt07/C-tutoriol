#include <bits/stdc++.h>
using namespace std;
class Base
{
public:
    void display() { cout << "Base class" << endl; }
};

class Derived : public Base
{
public:
    void display() { cout << "Derived class" << endl; }
    void extraFunction() { cout << "Extra function in Derived class" << endl; }
};

int main()
{
    // Pointer to Base class
    Base *basePtr = new Derived();
    Base *base_class_pointer;
    Base base_obj;
    Derived Derived_obj;
    base_class_pointer = &Derived_obj;

    // Pointer to Derived class
    Derived *derivedPtr = new Derived();

    // Accessing members using pointers
    base_class_pointer->display(); // Output: base class
    basePtr->display(); // Output: base class
    derivedPtr->display();       // Output: Derived class
    derivedPtr->extraFunction(); // Output: Extra function in Derived class

    return 0;
}
