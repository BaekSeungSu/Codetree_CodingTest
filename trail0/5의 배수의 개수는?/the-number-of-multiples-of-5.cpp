#include <iostream>
using namespace std;

int main() {
    int count = 0;

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            int n;
            cin >> n;

            if(n%5 == 0) count++;
        }
    }

    cout << count;
    return 0;
}