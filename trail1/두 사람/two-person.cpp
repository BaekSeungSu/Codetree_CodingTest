#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, char> A;
    pair<int ,char> B;

    cin >> A.first >> A.second;
    cin >> B.first >> B.second;

    if((A.first >= 19 && A.second == 'M') || (B.first >= 19 && B.second == 'M'))
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}