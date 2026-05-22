#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int result = 0;

    for(int i = 1; i <= 100; ++i)
    {
        result += i;
        if(result >= N)
        {
            cout << i;
            break;
        }
    }
    return 0;
}