#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long ar[n+1][n+1];
    for(int i=1 ; i<n+1 ; i++){
        for(int j=1 ; j<n+1 ; j++){
            if(i==1 || j==1){
                ar[i][j] = 1;
            }else {
                ar[i][j] = ar[i-1][j] + ar[i][j-1];
            }
        }
    }
    cout << ar[n][n] << endl;
    return 0;
}