#include <iostream>

using namespace std;

int main()
{
    int coun = 0;
    string n;
    cin>>n;
    for(int i=0 ; i<n.size() ; i++){
        if(n[i]=='4' || n[i]=='7'){
            coun++;
        }
    }
    if(coun == 4 || coun == 7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
