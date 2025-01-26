/*
Create 2 classes
1.Simple Calculator - take input of two numbers using a utility function and ferforms  +, -, *, / and display the result using anothar utility function.
2.ScientificCalculator - take input of two numbers using a utility function and ferforms any four scientific operation of your choice and display the result using anothar utility function.
*/
#include <iostream>
using namespace std;

// Base class
class Calculator
{
protected:
    double num1, num2;

public:
    void getNumbers()
    {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
    }

    // virtual void calculate() = 0; // Pure virtual function
};

// Derived class: AdditionCalculator
class Addition : public Calculator
{
public:
    void calculate()
    {
        getNumbers();
        double result = num1 + num2;
        cout << "Result: Addition = " << result << endl;
    }
};

// Derived class: SubtractionCalculator
class Subtraction : public Calculator
{
public:
    void calculate()
    {
        getNumbers();
        double result = num1 - num2;
        cout << "Result: Subtraction = " << result << endl;
    }
};

// Derived class: MultiplicationCalculator
class Multiplication : public Calculator
{
public:
    void calculate()
    {
        getNumbers();
        double result = num1 * num2;
        cout << "Result: Multiplication = " << result << endl;
    }
};

// Derived class: DivisionCalculator
class Division : public Calculator
{
public:
    void calculate()
    {
        getNumbers();
        if (num2 != 0)
        {
            double result = num1 / num2;
            cout << "Result: Division = " << result << endl;
        }
        else
        {
            cout << "Error: Division by zero!" << endl;
        }
    }
};

int main()
{
    int choice;
    cout << "Simple Calculator" << endl;
    cout << "-----------------" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Choose operation: ";
    cin >> choice;

    if (choice == 1)
    {
        Addition calc; // Here calc is a class object
        calc.calculate();
    }
    else if (choice == 2)
    {
        Subtraction calc;
        calc.calculate();
    }
    else if (choice == 3)
    {
        Multiplication calc;
        calc.calculate();
    }
    else if (choice == 4)
    {
        Division calc;
        calc.calculate();
    }
    else
    {
        cout << "Invalid operation!" << endl;
    }

    return 0;
}