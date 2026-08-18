#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    string N;
    vector<int> A;
    cin >> N;

    int result = 0;

    for(int i = 0; i<N.size(); i++)
    {
        result += ((N[i] -'0') * pow(2, N.size() - i - 1));
    }

    result *= 17;

    while(result > 0)
    {
        A.push_back(result%2);
        result/=2;
    }

    for(int i=A.size()-1; i >= 0; i--)
    {
        cout << A[i];
    }

    return 0;
}