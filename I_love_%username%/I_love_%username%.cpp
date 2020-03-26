#include <iostream>

using namespace std;

int main() {
    int n,x,min,max,ans=0;
    cin >> n;
    cin >> x;
    min = x;
    max = x;
    n--;
    while(n--){
        cin >> x;
        if(x>max){
            max = x;
            ans++;
        }
        if(x<min){
            min = x;
            ans++;
        }
    }

    cout << ans;
return 0;
}