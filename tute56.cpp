// #include <bits/stdc++.h>
// using namespace std;
// class Base
// {
// public:
//     virtual void display() { cout << "Base class" << endl; }
//     // if we use virtual keyword then run derived class display function
// };

// class Derived : public Base
// {
// public:
//     void display() { cout << "Derived class" << endl; }
//     void extraFunction() { cout << "Extra function in Derived class" << endl; }
// };
// int main()
// {
//     Base *base_class_pointer;
//     Base base_obj;
//     Derived Derived_obj;
//     base_class_pointer = &Derived_obj;
//     base_class_pointer->display();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Generic animal sound" << endl;
    }
    // If we remove 'virtual' then output is 'Generic animal sound'
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Woof woof!" << endl;
    }
};

class Cat : public Animal
{
public:
    void sound()
    {
        cout << "Meow meow!" << endl;
    }
};

int main()
{
    Animal *animal;
    animal = new Dog();
    animal->sound(); //  Woof!

    animal = new Cat();
    animal->sound(); //  Meow!

    return 0;
}

// It is run time binding 