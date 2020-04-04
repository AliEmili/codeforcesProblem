#include <iostream>

using namespace std;

int main() {
    int n,m,a,b,temp,ans = 0;
    cin >> n >> m >> a >> b;
    if(b/m>=a){
        cout << n*a << endl;
        return 0;
    }
    temp = n/m;
    ans += temp*b;
    temp = n%m;
    if(temp){
        if(temp*a>b){
            ans += b;
        }
        else{
            ans+= (temp*a);
        }
    }
    cout << ans << endl;
    return 0;
}