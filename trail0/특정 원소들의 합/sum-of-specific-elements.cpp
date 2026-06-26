#include <iostream>
using namespace std;


// 0, 4, 5, 8, 9, 10, 12, 13, 14, 15
int main() {
    int result = 0;
    int mask[4][4] = {
        {1, 0, 0, 0},
        {1, 1, 0, 0},
        {1, 1, 1, 0},
        {1, 1, 1, 1}
        };

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            int n;
            cin >> n;
            if(mask[i][j] == 1) result += n;
        }
    }

    cout << result;
    return 0;
}