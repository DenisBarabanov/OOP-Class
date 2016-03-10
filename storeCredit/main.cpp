#include <iostream>

using namespace std;

int main()
{
    int C, N, *items = new int[N];
    cin >> C >> N;
    for(int j = 0; j < N; j++)
        cin >> items[j];
    for(int i = 0; i < N - 1; i++)
        for(int j = i + 1; j < N; j++)
            if(items[i] + items[j] == C)
                cout << i << ' ' << j << endl;
}
