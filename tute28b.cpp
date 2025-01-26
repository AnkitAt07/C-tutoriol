#include <iostream>
using namespace std;
class cl2;
class cl1
{
    int val1;
    friend void swap(cl1 &, cl2 &);

public:
    void givedata(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
};

class cl2
{
    int val2;
    friend void swap(cl1 &, cl2 &);

public:
    void givedata(int b)
    {
        val2 = b;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
};
void swap(cl1 &x, cl2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}
int main()
{
    cl1 obj1;
    cl2 obj2;
    obj1.givedata(15);
    obj2.givedata(40);
    swap(obj1, obj2);
    cout << "After swaping :"<<endl;
    obj1.display();
    obj2.display();
    return 0;
}