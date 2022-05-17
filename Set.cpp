#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;
int main()
{
    // Sets are implemented using Binary Seach Tree
    // We can't modify the element in Sets
    // Either enter the element or delete the element
    // Elements are returned in sorted array
    // Unorder sets are bit faster than common sets, beacause the elments are not in sorted unorder sets

    set<int> s;
    // unordered_set<int> s

    s.insert(5);
    s.insert(2);
    s.insert(9);
    s.insert(7);
    s.insert(1);

    for (auto i : s)
    {
        cout << i << endl;
    }

    // s.erase(s.begin());

    // for (auto i : s)
    // {
    //     cout << i << endl;
    // }

    set<int>::iterator it = s.begin();
    it++;

    // s.erase(it);

    // for (auto i : s)
    // {
    //     cout << "\n"
    //          << i << endl;
    // }

    cout << "5 present or not -> " << s.count(5) << endl;

    // find returns the iterator value
    set<int>::iterator itr = s.find(5);

    // Return reference of that element
    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " " << endl;
    }
    return 0;
}