// vector in c++ STL
#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1;
    int element, size;
    cout << "Enter the size of vector :" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element to this vector : ";
        cin >> element;
        vec1.push_back(element);
    }
    // vec1.pop_back();  // Delete last element
    display(vec1); // Print the entered element
    vector<int>::iterator insertval = vec1.begin();
    vec1.insert(insertval, 2, 100); // insert, copy, value
    display(vec1);
    // cout <<vec1.size(); // Printing the size after insert copy

    return 0;
}