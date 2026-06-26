#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;

    cin >> N >> M;

    vector<vector<int>> A(N, vector<int>(M));

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            cin >> A[i][j];
        }
    }

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            int B;
            cin >> B;

            if(A[i][j] != B) A[i][j] = 1;
            else A[i][j] = 0;
        }
    }

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            cout << A[i][j] << ' ';
        }
        cout << '\n';
    }

    

    return 0;
}