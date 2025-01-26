// array of object & passing objects as function arguments
#include <iostream>
using namespace std;

class employee
{
    int id, salary;

public:
    void setid(void)
    {
        salary = 100;
        cout << "Enter id of employee " << endl;
        cin >> id;
    }
    void getid(void)
    {
        cout << "The id of this employee is  " << id << endl;
    }
};
int main()
{
    // employee ram, shyam, krishna, mohan, sita;
    // ram.setid();
    // ram.getid();

    // array of object
    int number;
    cout << "Enter number of employee :" << endl;
    cin >> number;
    employee wap[number];
    for (int i = 0; i < number; i++)
    {
        wap[i].setid();
        wap[i].getid();
    }

    return 0;
}