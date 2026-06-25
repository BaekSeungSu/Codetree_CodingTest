#include <iostream>
using namespace std;

int main() {
    int s, e, result = 0;
    cin >> s >> e;

    for(int i = s; i<= e; i++)
    {
        int count = 0;
        for(int j=1; j * j <= i; j++)
        {
            if(i % j == 0)
            {
                if(j * j == i)
                {
                    count +=1;
                }
                else
                {
                    count += 2;
                }
            }
        }
        if(count == 3)
        {
            result++;
        }
    }
    cout << result;
    return 0;
}