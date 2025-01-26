#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    // Writing file
    ofstream files("example.txt");
    files << "Hello this a file."<<endl<<"And this is 2nd line"<<endl;
    files.close();

    // Reading file
    ifstream file("exam.txt");
    string text;
    while (getline(file, text))
    {
        cout << text << endl;
    }
    file.close();
    return 0;
}