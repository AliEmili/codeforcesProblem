#include <iostream>

using namespace std;

int main()
{
    int h=-1,e=-1,l=-1,l2=-1,o=-1,sw=0;
    string s;
    cin>>s;
    h=s.find('h');
    if(h>=0)
        e=s.find('e',h+1);
    if(e>=0)
        l=s.find('l',e+1);
    if(l>=0)
        l2=s.find('l',l+1);
    if(l2>=0)
        o=s.find('o',l2+1);
    if(o>=0)
    {
        cout<<"YES"<<endl;
        sw++;
    }
    if(!sw)
        cout<<"NO"<<endl;


    return 0;
}
