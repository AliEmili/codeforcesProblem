#include <iostream>

using namespace std;

int main() {
    long long n;
    int ans = 1;
    cin >> n;
    for(int i=2 ; i<n ; i++){
        if(!(n%i)){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}