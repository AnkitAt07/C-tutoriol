// Memory allocation & using array in opps
#include <iostream>
using namespace std;

class shop
{
    int item_id[100];
    int item_price[100];
    int counter;

public:
    void icounter(void) { counter = 1; }
    void setprice(void)
    {
        cout << "Enter id of your item " << counter << endl;
        cin >> item_id[counter];

        cout << "Enter price of your item " << counter << endl;
        cin >> item_price[counter];
        counter++;
    }
    void displayprice(void)
    {
        for (int i = 1; i < counter; i++)
        {
            cout << "The price of item with id " << item_id[i] << " is " << item_price[i] << endl;
        }
    }
};
// void shop :setprice(void)
// {
//     // int counter ;
//     cout << "Enter id of your item " << counter << endl;
//     cin >> item_id[counter];

//     cout << "Enter price of your item " << counter << endl;
//     cin >> item_price[counter];
//     counter++;
// }

void shop ::displayprice(void)
{
    for (int i = 1; i < counter; i++)
    {
        cout << "The price of item with id " << item_id[i] << " is " << item_price[i] << endl;
    }
}
int main()
{
    shop e_mart;
    e_mart.icounter();
    e_mart.setprice();
    e_mart.setprice();
    e_mart.displayprice();

    return 0;
}