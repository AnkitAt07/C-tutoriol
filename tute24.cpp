// Static data member
#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the id :" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
};
int employee ::count;  
int main()
{
    employee ram, mohan, shyam;
    ram.setdata();
    ram.getdata();

    mohan.setdata();
    mohan.getdata();

    shyam.setdata();
    shyam.getdata();
    return 0;
}