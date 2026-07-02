#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    cout << (A > B ? A - B : B - A);
    return 0;
}