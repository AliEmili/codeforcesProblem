#include <iostream>

using namespace std;

int main() {
    int n,k,x,sum = 0;
    cin >> n >> k;
    for(int i=0 ; i<n ; i++){
        cin >> x;
        if(5-x >= k){
            sum += k;
        }
    }
    cout << sum/(3*k) << endl;
    return 0;
}