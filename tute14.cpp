// STRUCTURE >>> User defind data type
#include <iostream>
using namespace std;
// typedef  // NO need to write
struct employee
{
    int uid;
    char favChar;
    float salary;
} emp;

// union
union money
{
    int book;
    float pounds;
    char bike;
} m;

int main()
{
    // struct employee ankit;
    // OR
    // emp ankit;
    // ankit.uid = 30333;
    // ankit.favChar = 'R';
    // ankit.salary = 90000;
    // cout << ankit.salary << endl
    //      << ankit.uid << endl
    //      << ankit.favChar << endl;
    // union main ek time pe ek hi type use hoga
    // m m1;
    // m1.book = 50;
    // m1.pounds = 87.43686;
    // m1.bike = 'n';
    // cout << m1.book << endl;
    // cout << m1.pounds << endl;
    // cout << m1.bike<<endl;

    // ENUM *******
    enum gaddi
    {
        ninjah2r,
        bmwi8,
        lamborgini
    };
    cout << bmwi8 << endl;
    cout << ninjah2r << endl;
    cout << lamborgini << endl;
    return 0;
}