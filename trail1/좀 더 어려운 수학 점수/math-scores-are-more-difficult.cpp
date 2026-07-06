#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, int> A;
    pair<int, int> B;

    cin >> A.first >> A.second;
    cin >> B.first >> B.second;

    if(A.first  > B.first)
    {
        cout << 'A';
    }
    else if(A.first  < B.first)
    {
        cout << 'B';
    }
    else
    {
        if(A.second > B.second)
        {
            cout << 'A';
        }
        else
        {
            cout << 'B';
        }
    }

    return 0;
}