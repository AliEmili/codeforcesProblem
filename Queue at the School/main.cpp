#include <iostream>

using namespace std;

int main()
{
    int x,y;
    string str;
    cin>>x>>y;
    cin>>str;
    for(int i=0 ; i<y ; i++){
        for(int j=0 ; j<str.size()-1 ; j++){
            if(str[j]=='B' && str[j+1]=='G'){
                str[j] = 'G';
                str[j+1] = 'B';
                j++;
            }
        }
    }
    cout<<str;
    return 0;
}
