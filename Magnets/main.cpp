#include <iostream>

using namespace std;

int main()
{
    int a, ans=0;
    cin>>a;
    string str[a];
    for(int i=0 ; i<a ; i++){
        cin>>str[i];
    }
    for(int i=0 ; i<a-1 ; i++){
        if(str[i].at(1) == str[i+1].at(0))
            ans++;
    }
    cout<<ans+1;
    return 0;
}
