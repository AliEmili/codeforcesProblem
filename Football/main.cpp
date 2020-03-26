#include <iostream>
#include <string>
using namespace std;

int main()
{
    int sw=0;
    string str;
    cin>>str;
    for (int i=str.size()-1 ; i>=6 ; i--)
    {
        if (str.at(i)==str.at(i-1) && str.at(i)==str.at(i-2) && str.at(i)==str.at(i-3) && str.at(i)==str.at(i-4) && str.at(i)==str.at(i-5) && str.at(i)==str.at(i-6))
            sw=1;
    }
    if (sw==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
