#include <iostream>
using namespace std;

int main() {
    int A, B, result = 0;
    cin >> A >> B;

    for(int i=A; i<=B; i++)
    {
        if(i % 2 == 0)
        {
            result += i;
        }
    }

    cout << result;

    return 0;
}