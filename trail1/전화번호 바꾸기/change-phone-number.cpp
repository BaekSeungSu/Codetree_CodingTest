#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    char c;
    cin >> x >> c >> y >> c >> z;
    int tmp;
    tmp = y;
    y = z;
    z = tmp;

    cout << 0 << x << '-' << y << '-' << z; 
    return 0;
}