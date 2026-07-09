#include <iostream>
using namespace std;

int main() {
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int n;
    cin >> n;

    cout << days[n-1];
    return 0;
}