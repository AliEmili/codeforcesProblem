#include <iostream>
#include <string.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    long long a[100003] = {0};
    int n,k;
    cin>>n;
	for(int i=0;i<n;i++){
        cin>>k;
        a[k]+=k;
	}
	int j;
	for(j=2;j<=100001;j++){
        if(a[j]==0){
            a[j] = a[j-1];
        }
        else{
            a[j]=max(a[j-1],a[j]+a[j-2]);
        }
	}
	cout<<a[j-1];

	return 0;
}
