#include <iostream>

using namespace std;

int main()
{
    int n,s,t;
    cin>>n>>s;
    int a[n] = {0};
    for(int i=0 ; i<s ; i++){
        int x;
        cin>>x;
        a[x-1] = 1;
    }
    cin>>t;
    for(int i=0 ; i<t ; i++){
        int x;
        cin>>x;
        a[x-1] = 1;
    }
    for(int i=0 ; i<n ; i++){
        if(a[i]!=1){
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
    return 0;
}
