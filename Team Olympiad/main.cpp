#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n,x,mi;
    cin >> n;
    vector <int> yek,du,se;
    for(int i=1 ; i<=n ; i++){
        cin >> x;
        if(x==1){
            yek.push_back(i);
        }else if(x==2){
            du.push_back(i);
        }else{
            se.push_back(i);
        }
    }
    int f,s,t;
    f = yek.size();
    s = du.size();
    t = se.size();
    mi = f;
    if(s<mi){
        mi = s;
    }
    if(t<mi){
        mi = t;
    }
    cout << mi <<endl;
    for(int i=0 ; i<mi ; i++){
        cout << yek[i] << ' ' << du[i] << ' ' << se[i] << endl;
    }
    return 0;
}