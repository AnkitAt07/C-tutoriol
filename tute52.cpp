#include <bits/stdc++.h>
using namespace std;

class shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
 
    void getData(void)
    {
        cout << "I'D of this item is :" << id << endl;
        cout << "Price of this item is :" << price << endl;
    }
};
int main()
{
    int size;
    cout << "Enter size :" << endl;
    cin >> size;
    int p, i;
    float q;
    shop *ptr = new shop[size];
    shop *ptritem = ptr;
    for (i = 0; i < size; i++)
    {
        cout << "Enter id and price of item :" << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout << "Item number :" << i + 1<< endl;
        ptritem->getData();
        ptritem++;
    }

    return 0;
}