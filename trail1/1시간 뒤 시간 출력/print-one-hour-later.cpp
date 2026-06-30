#include <iostream>
using namespace std;

int main() {
    int hour, minute;
    cin >> hour;
    cin.get();
    cin >> minute;
    cout << hour + 1 << ':' << minute;
    return 0;
}