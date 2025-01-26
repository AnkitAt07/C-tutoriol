// Multilevel inheritance
#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student ::set_roll_number(int r)
{
    roll_number = r;
}

void student ::get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}

class exam : public student
{
protected:
    float maths, physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void exam ::get_marks()
{
    cout << "the marks obtain in physics are " << physics << endl;
    cout << "the marks obtain in maths are " << maths << endl;
}
class result : public exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{
    result ankit;
    ankit.set_roll_number(12312);
    ankit.set_marks(96.0, 94.4);
    ankit.display_result();
    return 0;
}

/*
Notes :
if we are inheriting b from a and c from b [a--->b--->c]
1. 'student' is the base class for 'exam' and 'exam' is the base class for 'result'
2. [student--->exam--->result] is the inheritance path
*/