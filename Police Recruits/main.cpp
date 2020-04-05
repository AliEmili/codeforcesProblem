#include <iostream>

using namespace std;

int main() {
    int n,x,recruited = 0,ans = 0;
    cin >> n;
    while(n--){
        cin >> x;
        if(x == -1){
            if(recruited){
                recruited--;
            }
            else{
                ans++;
            }
        }
        else if(x>0){
            recruited += x;
        }
    }

    cout << ans << endl;
    return 0;
}