#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> A = {"apple", "banana", "grape", "blueberry", "orange"};

    int result = 0;
    char c;
    cin >> c;

    for(int i=0; i<A.size(); i++)
    {
        if(A[i][2] == c || A[i][3] == c)
        {
            result++;
            cout << A[i] << '\n';
        }
    }

    cout << result;

    return 0;
}