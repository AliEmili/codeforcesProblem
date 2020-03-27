#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, ans = 0, rem = 0, sth;
    cin >> a >> b;
    while (a + rem >= b)
    {
        ans += a;
        rem += (a % b);
        a = floor(a / double(b));
        if (rem >= b)
        {
            sth = rem / b;
            a += sth;
            rem %= b;
        }
    }
    if (a)
    {
        ans += a;
    }
    cout << ans << endl;
    return 0;
}