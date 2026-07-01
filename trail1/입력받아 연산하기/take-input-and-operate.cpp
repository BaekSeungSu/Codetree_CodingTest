#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    x += 87;
    y %= 10;

    cout << x << '\n' << y;
    return 0;
}