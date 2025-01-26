// File read & write
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // opening file using constructor & writing it 
    // string st = "Piyush kumar " ;
    // ofstream out("simple60.txt");  //For using write operation
    // out<<st;

    // opening file using constructor & reaing it
    string st2 ;
    ifstream in("simple60b.txt"); // For using write operation
    in >> st2;
    getline(in ,st2); // for first line 
    cout <<st2;
    return 0;
}