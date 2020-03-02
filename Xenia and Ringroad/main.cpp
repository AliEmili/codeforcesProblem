#include <iostream>

using namespace std;

int main()
{
    long long n,m,current = 1;
    cin >> n >> m;
    long long a[m];
    long long ans = 0;
    for (int i=0 ; i<m ; i++){
        cin >> a[i];
    }
    for (int i=0 ; i<m ; i++){
        if (current < a[i]){
            ans += (a[i] - current);
        }
        else if(current > a[i]){
            ans += (a[i] - 1) + (n - (current - 1));
        }
        current = a[i];
    }
    cout << ans;

    return 0;
}
