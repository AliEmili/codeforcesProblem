#include <iostream>

using namespace std;

int main() {
    int k,r,ans,ini,temp;
    cin >> k >> r;
    ini = k;
    while(true){
        if(k%10==0){
            cout << k/ini << endl;
            return 0;
        }
        else{
            temp = k%10;
            if(temp == r){
                cout << k/ini << endl;
                return 0;
            }
            else{
                k += ini;
            }
        }
    }
return 0;
}

