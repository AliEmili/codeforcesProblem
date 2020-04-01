#include <iostream>

using namespace std;

int main() {
    int mar[5] = {100,20,10,5,1};
    long long n, ans = 0;
    cin >> n;
    for(int i=0 ; i<5 ; i++){
        ans += (n / mar[i]);
        if(n%mar[i]==0){
            break;
        }
        n %= mar[i];
        
    }
    cout << ans << endl;
    return 0;
}