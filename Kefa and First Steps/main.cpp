#include <iostream>

using namespace std;

int main()
{
    int n,c=0,x=-10e12,temp,ma=-10e12;
    cin>>n;
    while(n--){
        temp = x;
        cin>>x;
        if(x>=temp)
            c++;
        else
            c=1;
        ma = max(c,ma);
    }
    cout<<ma;
    return 0;
}
