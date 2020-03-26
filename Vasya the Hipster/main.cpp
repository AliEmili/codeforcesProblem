#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,x,y;
    cin >> a >> b;
    x = min(a,b);
    y = floor((max(a,b)-x)/2);
    cout << x << ' ' << y;
    return 0;
}
