#include <iostream>

using namespace std;

int main() {
    string firstSt;
    int ans = 0;
    string arr[5];
    cin >> firstSt;
    for(int i=0; i<5 ; i++){
        cin >> arr[i];
        if(arr[i][0] == firstSt[0] || arr[i][1] == firstSt[1]){
            ans++;
        }
    }
    if(ans){
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
    return 0;
}