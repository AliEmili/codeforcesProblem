#include <iostream>

using namespace std;

int main()
{
    int n,x,y,c=0;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cin>>x>>y;
        if(y-x>1)
            c++;
    }
    cout<<c;
    return 0;
}
