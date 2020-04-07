#include <iostream>

using namespace std;

int main() {
    int n, m = 0,c = 0, x, y;
    cin >> n;
    while(n--){
        cin >> x >> y;
        if(x > y) {
            m++;
        }
        else if(y > x){
            c++;
        }
    }
    if(m > c){
        cout << "Mishka" << endl;
    }
    else if(c > m){
        cout << "Chris" << endl;
    }
    else {
        cout << "Friendship is magic!^^" << endl;
    }
    return 0;
}