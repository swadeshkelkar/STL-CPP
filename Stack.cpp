#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // Stack is Last In First Out Data structure
    stack<string> s;

    // Insert in Stack
    s.push("I");
    s.push("Love");
    s.push("India");

    // Top element of stach
    cout << "Top Element in stack -> " << s.top() << endl;

    s.pop();

    // cout << "Top Element in stack -> " << s.top() << endl

    cout << "Size of stack -> " << s.size() << endl;

    cout << "Empty or not : " << s.empty() << endl;

    return 0;
}