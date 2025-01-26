#include <iostream>
using namespace std;

class bankdeposite
{
private:
    int princple, year;
    float interest, returnvalue;

public:
    bankdeposite(){};
    bankdeposite(int p, int y, float r)
    {
        princple = p;
        year = y;
        interest = r;
        returnvalue = princple;
        for (int i = 0; i < y; i++)
        {
            returnvalue = returnvalue * (1 + r);
        }
    }

    void show(void)
    {
        cout << "princple amount was " << princple << endl
             << "Return value after " << year << " is " << returnvalue << endl;
    }
};
int main()
{
    bankdeposite bd1, bd2, bd3;
    int p, y;
    float r;
    cout << "Enter the Princple value " << endl;
    cin >> p;
    cout << "Enter Year " << endl;
    cin >> y;
    cout << "Enter Interest rate " << endl;
    cin >> r;

    bd1 = bankdeposite(p, y, r);
    bd1.show();

    return 0;
}