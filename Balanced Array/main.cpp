#include <iostream>

using namespace std;

int main()
{
    int t,n,x,sumz,quanz;
    cin >> t;
    for(int i=0 ; i<t ; i++){
        quanz = 0;
        sumz = 0;
        cin >> n;
        if((n/2)%2){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            x = 2;
            for(int j=0 ; j<n/2 ; j++){
                cout << x << ' ';
                sumz += x;
                x += 2;
                quanz++;
            }
            x = 1;
            while(quanz-1){
                cout << x << ' ';
                sumz -= x;
                x += 2;
                quanz --;
            }
            cout << sumz << endl;
        }
    }
    return 0;
}
