#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int s,n,x,y;
    vector <pair <int,int>> v;
    cin >> s >> n;
    for (int i=0 ; i<n ; i++){
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    int vSize = v.size();
    for (int i=0 ; i<vSize ; i++){
        if(s>v[i].first){
            s += v[i].second;
        }
        else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}
