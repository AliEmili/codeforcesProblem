#include <iostream>

using namespace std;

int main()
{
    int station,sum=0,x,y,maxi=0;
    cin>>station;
    for (int i=0 ; i<station ; i++)
    {
        cin>>x;
        cin>>y;
        sum-=x;
        if (sum>maxi)
            maxi=sum;
        sum+=y;
        if (sum>maxi)
            maxi=sum;
    }
    cout<<maxi;
    return 0;
}
