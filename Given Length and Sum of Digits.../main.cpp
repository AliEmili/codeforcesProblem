#include <iostream>

using namespace std;

int main() {
    int m,s,ss;
    cin >> m >> s;
    ss = s;
    if(9*m<s || s==0 && m!=1){
        cout << "-1 -1" <<endl;
        return 0;
    }
    int arr1[m] = {0},arr2[m] = {0};
    int i=0;
    while(s){
        if(s>9){
            arr1[i] = 9;
            s -= 9;
        }else{
            arr1[i] = s;
            s = 0;
        }
        i++;
    }
    // calculate min
    i=m-1;
    
    while(ss){
        if(ss>9){
            arr2[i] = 9;
            ss -= 9;
        }else{
            arr2[i] = ss-1;
            if(i>0){
                arr2[0] = 1;
            }else{
                arr2[0]++;
            }
            ss = 0;
        }
        i--;
    }

    for(int i=0 ; i<m ; i++){
        cout << arr2[i];
    }
    cout << ' ';
    for(int i=0 ; i<m ; i++){
        cout << arr1[i];
    }
    return 0;
}