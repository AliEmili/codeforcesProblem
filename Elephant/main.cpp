#include <iostream>

using namespace std;

int main()
{
    long long int n,c=0;
    cin>>n;
    if(n>6){
        c = n/5;
        n %= 5;
    }
    if(n)
        c++;
    cout<<c;
    return 0;
}
