#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    bool flag = true;
    string str;
    getline(cin,str);
    if(str.size()==1){
        if(str[0]>='a' && str[0]<='z')
            str[0] = toupper(str[0]);
        else
            str[0] = tolower(str[0]);
        cout<<str;
        return 0;
    }
    for(int i=1 ; i<str.size() ; i++){
        if(!(str[i]>='A' && str[i]<='Z'))
            flag = false;
    }
    if(flag){
        for(int i=0 ; i<str.size() ; i++){
            if(str[i]>='a' && str[i]<='z'){
                str[i] = toupper(str[i]);
            }
            else if(str[i]>='A' && str[i]<='Z'){
                str[i] = tolower(str[i]);
            }
        }
    }
    cout<<str;
    return 0;
}
