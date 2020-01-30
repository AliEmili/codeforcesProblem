#include <iostream>

using namespace std;

int main()
{
    int a=0,d=0;
    string str;
    int bull;
    cin>>bull;
    cin>>str;
    for(int i=0 ; i<str.size() ; i++){
        if(str[i]=='A')
            a++;
        else if(str[i]=='D')
            d++;
    }
    if(a>d){
        cout<<"Anton";
    }
    else if(d>a){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
    return 0;
}
