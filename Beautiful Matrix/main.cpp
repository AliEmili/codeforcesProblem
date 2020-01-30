#include <iostream>

using namespace std;

int main()
{
    int x[5][5],I,J;
    for (int i=0 ; i<5 ; i++)
        for (int j=0 ; j<5 ; j++)
        {
            cin>>x[i][j];
            if (x[i][j]==1)
            {
                I=i+1;
                J=j+1;
            }
        }
    I-=3;
    J-=3;
    if (I<0)
        I*=-1;
    if (J<0)
        J*=-1;
    cout<<I+J;
    return 0;
}
