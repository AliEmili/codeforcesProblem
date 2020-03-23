#include <iostream>

using namespace std;

int main()
{
    int n,m,ans = 0;
    int i=0;
    cin >> n >> m;
    while(n){
        ans++;
        n--;
        i++;
        if(i==m){
            i=0;
            n++;
        }
    }
    cout << ans;
    return 0;
}
