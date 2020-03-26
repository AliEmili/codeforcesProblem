#include <iostream>

using namespace std;

int main()
{
    string str;
    cin>>str;
    if (int(str.at(0))<64 || int(str.at(0))>91)
        str.at(0)-=32;
    cout<<str;
    return 0;
}
