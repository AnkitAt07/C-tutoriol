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

    virtual void display() { cout << "Hi ha haa haaa Please don't remove virtual keyword :" << endl; }
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
    float rating, vlen;
    int words;

    // For video
    title = "c++";
    vlen = 9.23;
    rating = 4.98;
    video dvideo(title, rating, vlen);
    // dvideo.display();

    title = "c++ text file :";
    words = 567;
    rating = 4.90;
    text dtext(title, rating, words);
    // dtext.display();

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

// Rules for define virtual function
// they cannot be statics
// they are access by pointer object
// virtual function can be a friend of another class
// virtual function in base class might not be used
// if a virtual function define in the base class, there is no necessary to redefining in derived class