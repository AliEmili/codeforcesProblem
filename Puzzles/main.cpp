#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,m,mi=10e8;
    cin>>n>>m;
    int arr[m];
    for(int i=0 ; i<m ; i++){
        cin>>arr[i];
    }
    sort(arr,arr+m);
    if(m==n){
        cout<<arr[m-1]-arr[0];
        return 0;
    }
    for(int i=0 ; i<=m-n ; i++){
        int sum = arr[i+(n-1)] - arr[i];
        mi = min(mi , sum);
    }
    cout<<mi;
    return 0;
}
