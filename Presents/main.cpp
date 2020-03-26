#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1];
    int b[n+1];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    for(int i=1; i<=n; i++){
        for(int j=1 ; j<=n ; j++){
            if(a[j]==i){
                b[i]=j;
            }
        }
    }
    for(int i=1; i<=n; i++){
        cout<<b[i]<<' ';
    }
    return 0;
}
