#include <iostream>

using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    if(!(n%2)){
        cout << n/2 << endl;
        for(int i=0 ; i<n/2 ; i++){
            cout << 2 << ' ';
        }
    }else {
        ans = n/2;
        cout << ans << endl;
        for(int i=0 ; i<ans-1 ; i++){
            cout << 2 << ' ';
        }
        cout << 3;
    }
    return 0;
}