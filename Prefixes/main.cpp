#include <iostream>

using namespace std;

int main()
{
    long long int n,a=0,b=0,c=0,f=-2;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0 ; i<str.size() ; i++){
        if(str[i]=='a')
            a++;
        else
            b++;
    }
            do{
                f = str.find("aa",f+2);
                if(f>-1){
                    str[f] = 'b';
                    c++;
                }
            }while(f!=-1);
        f = -1;
        {
            do{
                f = str.find("bb",f+2);
                if(f>-1){
                    str[f] = 'a';
                    c++;
                }
            }while(f!=-1);
        }

    cout<<c<<endl<<str;
    return 0;
}
