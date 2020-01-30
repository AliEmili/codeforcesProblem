#include <iostream>

using namespace std;

int main()
{
    int num,sw=0;
    string str;
    cin>>num>>str;
    for (int i=0 ; i<num-1 ; i++)
    {
        if (str.at(i)==str.at(i+1))
        {
            str.erase(i+1,1);
            i--;
            num--;
            sw++;
        }
    }
    cout<<sw;
    return 0;
}
