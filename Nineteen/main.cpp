#include <iostream>

using namespace std;

int main()
{
    int n=0,ith=0,e=0,t=0;
    string str;
    cin>>str;
    for(int i=0 ; i<str.size() ; i++){
        if(str[i]=='n')
            n++;
        if(str[i]=='i')
            ith++;
        if(str[i]=='e')
            e++;
        if(str[i]=='t')
            t++;
        n /= 3;
        e /= 3;
    }
    int mi = 10e12;
    return 0;
}
