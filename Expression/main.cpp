#include <iostream>

using namespace std;

int main()
{
    int a,b,c,ma=-10e12;
    cin>>a>>b>>c;
    int res = a+b+c;
    int res1 = (a+b)*c;
    int res2 = a*(b+c);
    int res3 = a*b*c;
    ma = max(ma,res);
    ma = max(ma,res1);
    ma = max(ma,res2);
    ma = max(ma,res3);

    cout<<ma;
    return 0;
}
