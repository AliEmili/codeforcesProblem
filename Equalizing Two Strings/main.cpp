#include <iostream>

using namespace std;

int main()
{
    long long int q,n;
    string st1,st2;
    cin>>q;
    while(q--){
        cin>>n;
        cin>>st1>>st2;
        bool flag = true;
        for(int i=0 ; i <st1.size() ; i++){
            if(st2.find(st1[i])>=0)
                continue;
            else{
                cout<<"NO"<<endl;
                flag = false;
                break;
            }
        }
        if (flag){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
