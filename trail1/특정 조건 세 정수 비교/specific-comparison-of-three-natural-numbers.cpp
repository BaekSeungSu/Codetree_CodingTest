#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int m = min({a, b, c});

    if(a == m)
    {
        cout << 1 << ' ';
    }
    else
    {
        cout << 0 << ' ';
    }

    if(a == b && b == c)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}