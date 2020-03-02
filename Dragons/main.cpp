#include <iostream>

using namespace std;

int main()
{
    int temp;
    long long s,n;
    int ans = 0;
    cin >> s >> n;
    int x[n],y[n];
    for (int i=0 ; i<n ; i++){
        cin >> x[i] >> y[i];
    }
    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(x[i] > x[j]){
                temp = x[j];
                x[j] = x[i];
                x[i] = temp;
                temp = y[j];
                y[j] = y[i];
                y[i] = temp;
            }
            else if (x[i] == x[j]){
                if(y[i] < y[j]){
                    temp = y[i];
                    y[i] = y[j];
                    y[j] = temp;
                }
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        if (s > x[i]){
            s += y[i];
        }
        else{
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
