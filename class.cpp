#include <iostream>
#include <string>
using namespace std;

// class fruit
// {
//     string nam;
//     string colour;
// };
class student
{
private:
    float marks;

public:
    string name;
    int rollNo;
    // float marks;
    void set(float marks);
    void get()
    {
        cout << name << endl
             << rollNo << endl
             << marks << endl;
    }
};
void student ::set(float marksa)
{
    marks = marksa;
}
int main()
{
    student ankit;
    ankit.name = "Ankit";
    ankit.rollNo = 12;
    // ankit.marks = 9.99;  // Here marks is private 
    ankit.set(9.91);
    ankit.get();
    return 0;
}