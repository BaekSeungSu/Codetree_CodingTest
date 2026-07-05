#include <iostream>
using namespace std;

int main() {
    int A;
    cin >> A;

    cout << (A % 3 == 0 ? "YES\n" : "NO\n");
    cout << (A % 5 == 0 ? "YES" : "NO");


    return 0;
}