#include <iostream>

using namespace std;

int main()
{
    int n;
    int ans = 0;
    int x,y;
    cin >> n;
    int a[101] = {0};
    int d[101] = {0};
    for (int i=0 ; i<n ; i++){
        cin >> x >> y;
        a[x]++;
        d[y]++;
        if(a[y]){
            ans += a[y];
        }
        if(d[x]){
            ans += d[x];
        }
    }
    cout << ans;
    return 0;
}
