#include <iostream>
using namespace std;

int main() {
    int A, result_3 = 0, result_5 = 0;

    for(int i=0; i<10; i++)
    {
        cin >> A;
        if(A % 3 == 0) result_3++;
        if(A % 5 == 0) result_5++;
    }

    cout << result_3 << " " << result_5;
    
    return 0;
}