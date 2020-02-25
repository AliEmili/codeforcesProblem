#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int r = min(n,m);
    if(r%2){
        cout << "Akshat";
    }
    else{
        cout << "Malvika";
    }
    return 0;
}
