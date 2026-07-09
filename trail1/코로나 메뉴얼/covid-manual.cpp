#include <iostream>
#include <utility>
using namespace std;

int main() {
    int em = 0;
    for(int i=0; i<3; i++)
    {
        pair<char, int> A;

        cin >> A.first >> A.second;

        if(A.first == 'Y' && A.second >= 37)
        {
            em++;
        }
    }

    if(em >=2)
    {
        cout << "E";
    }
    else
    {
        cout << "N";
    }
    return 0;
}