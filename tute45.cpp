#include <iostream>
using namespace std;

class student
{
protected:
    int rollno;

public:
    void setnumber(int a)
    {
        rollno = a;
    }
    void printnumber(void)
    {
        cout << "Your roll no is " << rollno << endl;
    }
};

class test : virtual public student
{
protected:
    float math, physics;

public:
    void setmark(float m1, float m2)
    {
        math = m1;
        physics = m2;
    }
    void printmark(void)
    {
        cout << "Marks obtain in math :" << math<<endl
             << "Marka obtain in physics :" << physics << endl;
    }
};
class sports : virtual public student
{
protected:
    float score;

public:
    void setscore(float sco)
    {
        score = sco;
    }
    void printscore(void)
    {
        cout << "your score is :" << score << endl;
    }
};

class result : public test ,public sports {
private:
float total ;
public :
void display (void){
    total= math+ physics + score;
    printnumber();
    printmark();
    printscore();
    cout <<"your total score is "<<total<<endl;
}
};
int main()
{
result ankit;
ankit.setnumber(12);
ankit.setmark(78.8,89.8);
ankit.setscore(7);
ankit.display();
    return 0;
}