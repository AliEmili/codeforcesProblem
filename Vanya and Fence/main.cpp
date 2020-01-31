#include <iostream>

using namespace std;

int main()
{
    int n,h,counter = 0;
    cin>>n>>h;
    for(int i=0 ; i<n ; i++){
        int temp;
        cin>>temp;
        if(temp>h){
            counter ++;
        }
    }
    cout<<n+counter;
    return 0;
}
