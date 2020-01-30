#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    if (x%2==0 && x>2)
    {
        int two = x%2;
        if (two%2==0)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else
        cout<<"NO";
    return 0;
}
