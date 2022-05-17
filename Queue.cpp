#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // Queue is First in First Out Data Structure
    queue<string> q;

    q.push("I");
    q.push("Love");
    q.push("India");

    cout << "First Element -> " << q.front() << endl;

    // cout << "Size before pop -> " << q.size() << endl;

    // q.pop();

    // cout << "First Element -> " << q.front() << endl;

    // cout << "Size after pop -> " << q.size() << endl;

    cout << "Empty or not : " << q.empty() << endl;

    return 0;
}