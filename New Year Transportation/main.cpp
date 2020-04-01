#include <iostream>

using namespace std;

int main() {
    int n,t,current = 1;
    cin >> n >> t;
    int a[n];
    for(int i=1 ; i<n ; i++){
        cin >> a[i];
    }
    while(current<=t){
        if(current == t){
            cout << "YES" << endl;
            return 0;
        }
        current += a[current];
    }
    cout << "NO" << endl;
    return 0;
}