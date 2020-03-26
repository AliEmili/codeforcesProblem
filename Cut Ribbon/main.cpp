#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int dp[n+1] = {0};
    dp[a] = 1;
    dp[b] = 1;
    dp[c] = 1;
    for(int i=0; i<=n; i++){
        int temp = 0;
        int check = 0;
        if ((i-a)>=0 and dp[i-a]!=0){
            temp = dp[i-a];
            check = 1;
        }
        if ((i-b)>=0 and dp[i-b]!=0){
            temp = max(temp,dp[i-b]);
            check = 1;
        }
        if ((i-c)>=0 and dp[i-c]!=0){
            temp = max(temp,dp[i-c]);
            check = 1;
        }
        if (check==1){
            dp[i] = temp + 1;
        }
    }
    cout<<dp[n];

}
