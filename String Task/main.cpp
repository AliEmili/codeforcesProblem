#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    cin>>x;
    int sizesh = x.size();
    for (int i=0 ; i<sizesh ; i++)
    {
        if (int(x.at(i))>64 && int(x.at(i))<91)
        x.at(i)=char(int(x.at(i))+32);
    }
    for (int i=0 ; i<x.size() ; i++)
    {
        if (x.at(i)=='a' || x.at(i)=='o' || x.at(i)=='y' ||  x.at(i)=='e' || x.at(i)=='u' ||  x.at(i)=='i' )
        {
                x.erase(i,1);
                i--;
        }
        else
        {
            x.insert(i,".");
            i++;
        }
    }
    cout<<x;
    return 0;
}
