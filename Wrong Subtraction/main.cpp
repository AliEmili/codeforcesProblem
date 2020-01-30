#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=0 ; i<b ; i++){
        int temp = a%10;
        if(temp){
            a--;
        }
        else{
            a/=10;
        }
    }
    cout<<a;
    return 0;
}
