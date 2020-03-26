#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    for (int i=0 ; i<str.size() ; i++)
        for (int j=i+1 ; j<str.size() ; j++){
            if (str.at(i)==str.at(j)){
                str.erase(j,1);
                j--;
            }
        }
    if (str.size()%2)
        cout<<"IGNORE HIM!"<<endl;
    else
        cout<<"CHAT WITH HER!"<<endl;
    return 0;
}
