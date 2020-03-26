#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    int up=0,low=0;
    string str;
    cin>>str;
    for(int i=0 ; i<str.size() ; i++){
        if(str[i]>='a' && str[i]<='z')
            low++;
        else if(str[i]>='A' && str[i]<='Z')
            up++;
    }
    if(low>=up){
        for(int i=0 ; i<str.size() ; i++){
            if(str[i]>='A' && str[i]<='Z'){
                str[i] = tolower(str[i]);
            }
        }
    }
    else{
        for(int i=0 ; i<str.size() ; i++){
            if(str[i]>='a' && str[i]<='z'){
                str[i] = toupper(str[i]);
            }
        }
    }
    cout<<str;
    return 0;
}
