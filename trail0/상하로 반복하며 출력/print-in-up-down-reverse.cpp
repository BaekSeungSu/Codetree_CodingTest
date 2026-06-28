#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[9][9];

    for(int i=0; i<N; i++)
    {
        int cnt = 1;
        if(i%2 != 0)
        {
            for(int j = N-1; j >= 0; j--)
            {
                arr[j][i] = cnt;
                cnt++;
            }
        }
        else
        {
            for(int j=0; j < N; j++)
            {
                arr[j][i] = cnt;
                cnt++;
            }
        }
    }

    for(int i=0; i < N; i++)
    {
        for(int j=0; j<N; j++)
        {
            cout << arr[i][j];
        }
        cout << '\n';
    }

    return 0;
}