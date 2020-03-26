#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int n, sum = 0, myCoins = 0, sm = 0;

    cin>>n;

    int coins[n];

    for(int i = n-1; i >= 0; i--){

        cin>>coins[i];

        sum += coins[i];

    }

    sort(coins , coins + n);

    for(int i = n-1; i >= 0; i--){

        if(sm <= sum/2){

            sm += coins[i];
            myCoins++;

        }

    }

    cout<<myCoins;


    return 0;
}
