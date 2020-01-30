#include <iostream>

using namespace std;

int main()
{
    int n,tedad=0;
    cin>>n; //questions
    int q[n][3];
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<3 ; j++)
            {
                cin>>q[i][j];
            }
        if (q[i][0]+q[i][1]+q[i][2]>=2)
            tedad++;
    }
    cout<<tedad;

    return 0;
}
