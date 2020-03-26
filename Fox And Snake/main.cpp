#include <iostream>

using namespace std;

int main()
{
    int n, m, sw = 0;
    cin >> n >> m;
    for (int i=1 ; i<=n ; i++){
        if(i%2){
            for(int j=0 ; j<m ; j++){
                cout << '#';
            }
            cout << endl;
        }
        else if (sw == 0){
            for(int j=0 ; j<m-1 ; j++){
                cout << '.';
            }
            cout << '#' << endl;
            sw = 1;
        }
        else if (sw == 1){
            cout << '#';
            for (int j=0 ; j<m-1 ; j++){
                cout << '.';
            }
            cout << endl;
            sw = 0;
        }
    }
    return 0;
}
