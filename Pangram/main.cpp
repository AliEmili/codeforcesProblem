#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    //
    for(int i=0 ; i<n ; i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i] = tolower(str[i]);
        }
    }
    //
    for(char ch='a' ; ch<='z' ; ch++){
        if(str.find(ch) >= 0 and str.find(ch)<n){
            continue;
        }
        else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}
