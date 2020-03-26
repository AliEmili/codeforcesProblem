#include <iostream>
#include <string>

using namespace std;

int main()
{

    int x;
    cin>>x;
    string words[x],temp;
    for (int i=0 ; i<x ; i++)
    {
        cin>>words[i];
    }
    for (int i=0 ; i<x ; i++)
        if (words[i].size()<=10)
            cout<<words[i]<<endl;
        else
            {
                int sizesh = words[i].size();
                cout<<words[i].at(0)<<sizesh-2<<words[i].at(sizesh-1)<<endl;
            }
    return 0;
}
