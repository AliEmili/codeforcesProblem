#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,ma=-10e10,mi=10e10;
    int maxIndex,minIndex;
    cin >> n;
    int a[n];
    for (int i=0 ; i<n ; i++){
        cin>>a[i];
        if(a[i]<=mi){
            mi = a[i];
            minIndex = i;
        }
    }
    for(int i=n-1 ; i>=0 ; i--){
        if(a[i]>=ma){
            ma = a[i];
            maxIndex = i;
        }
    }
    int ans = maxIndex + (n - 1 - minIndex);
    if(maxIndex > minIndex){
        ans--;
    }
    cout << ans;
    return 0;
}
