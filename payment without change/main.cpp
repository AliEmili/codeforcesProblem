#include <iostream>

using namespace std;

int main()
{
    long long a,b,n,q,s;
    cin>>q;
    for(int i=0 ; i<q ; i++){
        cin>>a>>b>>n>>s;
        if(a*n+b<s){
            cout<<"NO"<<endl;
        }
        else if (s==a*n+b){
            cout<<"YES"<<endl;
        }
        else{
            int magh = s/n;
            if(magh>a){
                if(a*n+b>=s)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else
            {
                int x = s % n;
                if(x>b)
                    cout<<"NO"<<endl;
                else
                    cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}
