#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> stk;
    string str;
    while(cin >> str)
        stk.push(str);
    while(!stk.empty()) {
        cout << stk.top() << ' ';
        stk.pop();
    }
}

