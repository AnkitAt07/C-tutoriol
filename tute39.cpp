#include <iostream>
using namespace std;

class months
{
protected:
    int a;

private:
    int b;
};
/*For a protected members
                public derivation      private derivation      protected derivation
1. private----->Not inherited         >Not inherited          >Not inherited
2. protected--->protected             >private                >protected
3. public------>public                >private                >protected
*/
// Derived class
class weaks : protected months
{

};

int main()
{
    months m;
    weaks w;
    // cout<< w.a; // Will not work since 'a' is protected in both as well as derived class 
    return 0;
}