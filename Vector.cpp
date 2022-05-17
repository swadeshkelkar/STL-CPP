#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //## Vector is dynamic array
    //## One vector is full thenn it will create another vector with
    //   double size and copy all the element of old vector in new vector and dump old vector

    vector<int> v;
    vector<int> v2(5, 1); // 5 in size of vector and 1 is for all the elements will be one
    vector<int> v3(v2);   // Copy elements of vector v2 in v3

    // Insert element in vector with pushpach
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout << "Capacity - " << v.capacity() << endl; // Capacity is memory allocated to vector

    cout << "Size - " << v.size() << endl; // Size is elements present in vector

    cout << "Element at index 2 - " << v.at(2) << endl;

    cout << "front - " << v.front() << endl;

    cout << "back - " << v.back() << endl;

    vector<int>::iterator begin;
    begin = v.begin();
    cout << "begin = " << *begin << endl;

    vector<int>::iterator end;
    end = v.end();
    cout << "end = " << *end << endl;

    // pop back operation
    cout << "Vector before pop - ";
    for (int i : v)
    {
        cout << i << " ";
    }

    v.pop_back(); // pop back removes last element from vector

    cout << "\nVector after pop - ";

    for (int i : v)
    {
        cout << i << " ";
    }

    // Clearing the vector
    cout << "\nSize before clearing - " << v.size();
    v.clear(); // Size becomes zero , Capacity remains same
    cout << "\nSize after clearing - " << v.size();

    return 0;
}