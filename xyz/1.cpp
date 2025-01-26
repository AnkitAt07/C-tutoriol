#include<bits/stdc++.h>

using namespace std;
class Rectangle
{
public:
    int length, width;
    void display()
    {
        cout <<"The length and Height are given by user is "<< length << " & " << width << endl;
    }
};
class RectangleArea : public Rectangle
{
public:
    void read_input()
    {
        cout << "Enter Length and width of a rectangle :" << endl;
        cin >> length >> width;
    }
    void display()
    {
        cout <<"Area is = " << (length * width);
    }
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea reactangle_area;

    /*
     * Read the width and height
     */
    reactangle_area.read_input();

    /*
     * Print the width and height
     */
    reactangle_area.Rectangle::display();

    /*
     * Print the area
     */
    reactangle_area.display();

    return 0;
}