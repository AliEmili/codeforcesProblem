#include <iostream>

using namespace std;
int fib (int);
int main()
{
    unsigned int x,sum=1,a=1,b=1;
    cin>>x;
    for (int i=1;i<x;i++)
    {
    sum+=b;
    int temp=a;
    a=b;
    b=temp+b;
    }
    if (x==1)
        cout<<x;
    else
        cout<<sum;
    return 0;
}
 
