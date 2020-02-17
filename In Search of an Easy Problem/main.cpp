#include <iostream>

using namespace std;

int main()
{
    int n,x;
    int ans = 0;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cin>>x;
        if(x){
            ans = 1;
        }
    }
    if(!ans){
        cout<<"easy";
    }
    else{
        cout<<"HARD";
    }
    return 0;
}
