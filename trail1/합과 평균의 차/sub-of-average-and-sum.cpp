#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int sum = A+B+C;
    int avg = sum/3;
    cout << sum << '\n' << avg << '\n' << sum - avg;
    return 0;
}