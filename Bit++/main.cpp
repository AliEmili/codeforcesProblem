#include <iostream>
#include <string>
using namespace std;

int main()
{
    signed int x=0,dastoor;
    string str="amir";
    cin>>dastoor;
    for (int i=0 ; i<dastoor ; i++)
    {
        cin>>str;
        for (int j=0 ; j<str.size() ; j++)
        {
            if (str.at(j)=='+')
            {
                x++;
                break;
            }
            else if (str.at(j)=='-')
            {
                x--;
                break;
            }
        }
    }
    cout<<x;
    return 0;
}
