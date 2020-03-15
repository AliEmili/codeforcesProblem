#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
    int n,k;
    long long l,temp,minimum = 10e8, maximum = -10e8;
    double ans;
    cin >> n >> l;
    long long a[n+1];
    for (int i=1 ; i<n+1 ; i++){
        cin >> a[i];
    }
    a[0] = 0;
    sort(a,a+n+1);
    for (int i=0 ; i<n ; i++){
        temp = a[i+1] - a[i];
        if(temp > maximum){
            maximum = temp;
        }
    }
    double minimum1 = a[1] - a[0];
    double minimum2 = l - a[n];
    double maximum1 = maximum / 2.0;
    ans = max(minimum1,maximum1);
    ans = max(ans,minimum2);
    printf("%.10f", ans);
    return 0;
}
