#include <iostream>

using namespace std;

int main()
{
    int ans, n, even = 0, odd = 0;
    cin >> n;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
        if(a[i]%2){
            odd++;
        }
        else{
            even++;
        }
    }
    if(odd > even){
        for(int i=0 ; i<n ; i++){
            if(!(a[i]%2)){
                ans = i+1;
                break;
            }
        }
    }
    else{
        for(int i=0 ; i<n ; i++){
            if(a[i]%2){
                ans = i+1;
                break;
            }
        }
    }
    cout << ans;
    return 0;
}
