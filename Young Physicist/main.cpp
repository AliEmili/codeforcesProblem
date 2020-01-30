#include <iostream>

using namespace std;

int main()
{
    long long int n,sum;
    cin>>n;
    if(n==1){
        long long int x;
        cin>>x;
        if(x==0){
            cout<<"YES";
            return 0;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    long long int arr[n][3];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<3 ; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0 ; i<3 ; i++){
        sum = 0;
        for(int j=0 ; j<n ; j++){
            sum+=arr[j][i];
        }
        if(sum!=0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
