#include <iostream>

using namespace std;

int main()
{
    int n, k, len = 0, hour = 240, rem, ans = 0, i = 1;
    cin >> n >> k;
    rem = 240 - k;
    while(rem > ans){
        ans += i * 5;
        if(ans<=rem){
            i++;
            if(i>n){
                cout << n;
                return 0;
            }
        }
    }
    cout << i-1;
    return 0;
}
