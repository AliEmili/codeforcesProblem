#include <iostream>

using namespace std;

int main()
{
    int n,x,ans=0,two=0,three=0,one=0;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cin>>x;
        if(x==4){
            ans++;
        }
        else if(x==3){
            three++;
        }
        else if(x==2){
            two++;
        }
        else if(x==1){
            one++;
        }
    }
    while(three && one){
        one--;
        three--;
        ans++;
    }
    if(three){
        ans += three;
    }
    if(one){
        int ones = one / 2;
        one %= 2;
        two += ones;
    }
    if(two){
        int twos = two / 2;
        two %= 2;
        ans += twos;
    }
    if(two || one){
        ans++;
    }
    cout<<ans;
    return 0;
}
