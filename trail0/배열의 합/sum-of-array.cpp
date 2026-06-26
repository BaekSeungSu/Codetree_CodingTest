#include <iostream>
using namespace std;

int main() {
    for(int i=0; i<4; i++)
    {
        int result = 0;
        for(int j=0; j<4; j++)
        {
            int n;
            cin >> n;

            result += n;
        }
        cout << result << '\n';
    }
    return 0;
}