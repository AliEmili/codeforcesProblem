#include <iostream>

using namespace std;

int main() {
    int n,temp,ans = 0,i = 1;
    cin >> n;
    while(ans < n){
        temp = (i*(i+1))/2;
        if(temp+ans<=n){
            ans += temp;
        }else{
            break;
        }
        i++;
    }
    cout << i-1 << endl;
    return 0;
}