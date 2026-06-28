#include <iostream>
using namespace std;

int main() {
    int Weight = 13;
    double G_Rate = 0.165;

    cout << fixed;

    cout.precision(6);
    cout << Weight << " * " << G_Rate << " = " << Weight * G_Rate;
    return 0;
}