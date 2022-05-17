#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
    //# Map is key value pair
    //# Every key is unique
    //# Each key is pointing to only one value
    //# Two different keys can have same value

    map<int, string> m;

    // unordered_map<int, string> m;

    m[1] = "I";
    m[4] = "Love";
    m[12] = "India";

    m.insert({10, "My"});

    // cout << "Before Erase -> " << endl;

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    // cout << "Finding 12 -> " << m.count(12) << endl;

    // cout << "After Erase -> " << endl;

    // m.erase(10);

    // for (auto i : m)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }

    auto it = m.find(4);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }

    return 0;
}