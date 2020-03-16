#include <iostream>
#include <map>

using namespace std;

int main()
{
    long long n;
    map <string,int> mp;
    string s;
    cin >> n;
    for (int i=0 ; i<n ; i++){
        cin >> s;
        if(mp[s]){
            cout << s << mp[s] << endl;
        }
        else {
            cout << "OK" << endl;
        }
        mp[s]++;
    }
    return 0;
}
