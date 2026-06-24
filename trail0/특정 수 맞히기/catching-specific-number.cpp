#include <iostream>
using namespace std;

int main() {
    int A;

    while(true)
    {
        cin >> A;
        if(A > 25) 
        {
            cout << "Lower\n";
        }
        else if( A < 25) 
        {
            cout << "Higher\n";
        }
        else
        {
            cout << "Good";
            break;
        }
    }
    return 0;
}