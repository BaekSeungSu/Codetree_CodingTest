#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, B;
    cin >> N >> B;
    vector<int> A;

    

    while(N > 0)
    {
        A.push_back(N%B);
        N /= B;
    }

    for(int i= A.size() -1 ; i >= 0; i--)
    {
        cout << A[i];
    }

    return 0;
}