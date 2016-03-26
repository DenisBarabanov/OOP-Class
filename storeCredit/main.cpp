#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int C, I, *items;
    for(int i = 0; i < N; i++) {
        cin >> C >> I;
        items = new int[I];
        for(int j = 0; j < I; j++)
            cin >> items[j];
        for(int j = 0; j < I - 1; j++)
            for(int k = j + 1; k < I; k++)
                if(items[j] + items[k] == C)
                    cout << "Case #" << i + 1 << ": " << j + 1 << ' ' << k + 1 << endl;
        delete items;
    }
}
