#include <iostream>

using namespace std;

bool islucky(int num){
    while (num>0){
            if ((num%10)!=4 && (num%10)!=7){
                return false;
            }
            num/=10;
        }
    return true;
}
int main()
{
    unsigned int num,remain=0;
    cin>>num;
    if(islucky(num)){
        cout<<"YES"<<endl;
        return 0;
    }
    else{
        for (int i=num-1; i>3 ; i--){
            if(!(num%i) && islucky(i)){
                cout<<"YES"<<endl;
                return 0;
            }
        }
        cout<<"NO"<<endl;
    }
    return 0;
}
