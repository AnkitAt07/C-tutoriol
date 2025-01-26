// // parametersied constructors
// #include <iostream>
// // #include <bits/stdc++.h>  // All in one header file
// using namespace std;

// class complex
// {
//     int x, y;

// public:
//     complex(int a, int b) // parametersied constructors--> arguments passed
//     {
//         x = a;
//         y = b;
//     }
//     void print_data()
//     {
//         cout << x << " + " << y << "i" << endl;
//     }
// };
// int main()
// {
//     complex object1(3, 4); // implicit call
//     complex object2 = complex(10, 23); // explicit call
//     object1.print_data();
//     object2.print_data();
//     return 0;
// }

#include <iostream>

class MyClass
{
private:
    int value;

public:
    // Default constructor
    MyClass() :
    value(5)
    {
        std::cout << "Default constructor called, value initialized to 5" << std::endl;
    }

    // Parameterized constructor
    MyClass(int val) : value(val)
    {
        std::cout << "Parameterized constructor called, value initialized to " << value << std::endl;
    }

    // Copy constructor
    MyClass(const MyClass &other) : value(other.value)
    {
        std::cout << "Copy constructor called, value copied as " << value << std::endl;
    }

    // Member function to display the value
    void display() const
    {
        std::cout << "Value: " << value << std::endl;
    }
};

int main()
{
    MyClass obj1;        // Calls default constructor
    MyClass obj2(10);    // Calls parameterized constructor
    MyClass obj3 = obj2; // Calls copy constructor

    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}
