/*  An Abstract Base Class (ABC) in C++ is a class that cannot be instantiated and contains
    at least one pure virtual function (declared with = 0).
    It is designed to be inherited by other classes,
    which must implement the pure virtual functions.
*/
#include <bits/stdc++.h>
using namespace std;

class cwh
{
protected:
    string title;
    float rating;

public:
    cwh(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; // Do nothing -> pure virtual function
};

class video : public cwh
{
    float vlength;

public:
    video(string s, float r, float vl) : cwh(s, r) // Constructor in derived class
    {
        vlength = vl;
    }
    void display()
    {
        cout << "This is a amazing video with title " << title << endl;
        cout << "Rating " << rating << " out of 5 star:" << endl;
        cout << "Length of this video " << vlength << " minutes:" << endl;
    }
};
class text : public cwh
{
    int words;

public:
    text(string s, float r, int wc) : cwh(s, r) // Constructor in derived class
    {
        words = wc;
    }

    void display()
    {
        cout << "This is a text with title " << title << endl;
        cout << "Rating " << rating << " out of 5 star:" << endl;
        cout << "No. of words in this text file " << words << " words" << endl;
    }
};
int main()
{
    string title;
    float rating, videolength;
    int words;

    video dvideo(title, rating, videolength);
    text dtext(title, rating, words);

    //  by pointer
    cwh *tuts[2];
    cout << endl;
    tuts[0] = &dvideo;
    tuts[1] = &dtext;

    tuts[1]->display();
    cout << endl;
    tuts[0]->display();
    //(*tuts)[0].display();     We can write
    return 0;
}