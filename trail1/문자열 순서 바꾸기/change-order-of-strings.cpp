#include <iostream>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    string tmp;
    tmp = S;
    S = T;
    T = tmp;

    cout << S << '\n' << T;
    return 0;
}