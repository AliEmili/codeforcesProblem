#include <iostream>

using namespace std;

int main()
{
    int sw=0;
    string str1,str2;
    cin>>str1>>str2;
    for (int i=0 ; i<str1.size() ; i++)
    {
        if (int(str1.at(i))>64 && int(str1.at(i))<91)
            int(str1.at(i)+=32);
        if (int(str2.at(i))>64 && int(str2.at(i))<91)
            int(str2.at(i)+=32);
        if (int(str1.at(i))>int(str2.at(i)))
        {
            cout<<1;
            sw++;
            break;
        }
        else if (int(str1.at(i))<int(str2.at(i)))
        {
            cout<<-1;
            sw++;
            break;
        }
    }
    if (sw==0)
        cout<<0;

    return 0;
}
