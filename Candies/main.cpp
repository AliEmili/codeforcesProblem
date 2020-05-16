#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int t, j;
    long long n,d;
    cin >> t;
    for(int i=0 ; i<t ; i++){
        cin >> n;
        j = 2;
        while(j){
            d = pow(2,j)-1;
            if(!(n%d)){
                cout <<n/d<<endl;
                break;
            }
            j++;
        }
    }
    return 0;
}