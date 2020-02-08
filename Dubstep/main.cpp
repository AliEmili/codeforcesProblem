#include <iostream>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int where = str.find("WUB");
    while(where>=0){
        str.erase(where,3);
        if(where)
            str.insert(where," ");
        where = str.find("WUB");
    }
    cout<<str;
    return 0;
}
