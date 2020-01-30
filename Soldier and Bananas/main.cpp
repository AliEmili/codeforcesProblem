#include <iostream>

using namespace std;
typedef long long ll;
int main()
{
    ll n;
    int k,w,all=0;
    cin>>k>>n>>w;
    for (int i=1 ; i<=w ; i++){
        all+=i*k;
    }
    if(all<=n){
        cout<<0<<endl;
        return 0;
    }
    cout<<all-n;
    return 0;
}
