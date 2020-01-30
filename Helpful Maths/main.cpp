#include <iostream>

using namespace std;

int main()
{
    string str;
    char temp;
    cin>>str;
    if (str.size()==1)
    {
        cout<<str;
        return 0;
    }
    else
        for (int i=0 ; i<str.size()-2 ; i+=2)
            for (int j=i+2 ; j<str.size() ; j+=2)
                if (int(str.at(i))>int(str.at(j)))
                {
                    temp = str.at(i);
                    str.at(i) = str.at(j);
                    str.at(j) = temp;
                }
    cout<<str;
    return 0;
}
