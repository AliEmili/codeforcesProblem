#include <iostream>
#include <math.h>

using namespace std;
bool isComposite(int x){
    if(x<4){
        return false;
    }
    for (int i=2 ; i<x ; i++){
        if (!(x%i)){
            return true;
        }
    }
    return false;
}
int main()
{
    long long n;
    int i,j;
    cin >> n;
    if (!(n%2)){
        i = n/2;
        j = i;
    }
    else{
        i=n/2;
        j = n-i;
    }
    while(!isComposite(i) || !isComposite(j)){
            i--;
            j++;
    }
    cout << i << ' ' << j;
    return 0;
}
