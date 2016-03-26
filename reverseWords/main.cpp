#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> stk;
    string str;
    int N;
    cin >> N;
    cin.ignore();
    for(int i = 0; i < N; i++) {
        getline(cin, str);
        string::size_type pos = str.find(' ');
        string::size_type prev_pos = 0;
        while(pos != string::npos) {
            stk.push(str.substr(prev_pos, pos-prev_pos));
            prev_pos = pos + 1;
            pos = str.find(' ', pos + 1);
        }
        stk.push(str.substr(prev_pos, str.length()-prev_pos));
        cout << "Case #" << i + 1 << ": ";
        while(!stk.empty()) {
            cout << stk.top() << ' ';
            stk.pop();
        }
        cout << endl;
    }
}

