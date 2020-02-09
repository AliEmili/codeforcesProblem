#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        if(i%2 && i==n){
            cout<<"I hate";
        }
        else if(i%2 && i!=n){
            cout<<"I hate that ";
        }
        else if(!(i%2) && i==n){
            cout<<"I love";
        }
        else if(!(i%2) && i!=n){
            cout<<"I love that ";
        }

    }
    cout<<" it";
    return 0;
}
