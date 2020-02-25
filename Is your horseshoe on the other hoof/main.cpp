#include <iostream>
#include <set>

using namespace std;

int main()
{
    long long n[4];
    int ans = 0;
    set <int> st;
    for(int i=0 ; i<4 ; i++){
        cin >> n[i];
        int currentSize = st.size();
        st.insert(n[i]);
        if(st.size() == currentSize){
            ans ++;
        }
    }
    cout << ans;
    return 0;
}
