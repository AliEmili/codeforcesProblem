#include <iostream>

using namespace std;

int main()
{
    int ans = 0;
    int x[4],n;
    for(int i=0 ; i<4 ; i++){
        cin>>x[i];
    }
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        int check = 0;
        for(int j=0 ; j<4 ; j++){
            if(!(i%x[j])){
                check = 1;
                break;
            }
        }
        if(check){
            ans++;
        }
    }
    cout << ans;
    return 0;
}
