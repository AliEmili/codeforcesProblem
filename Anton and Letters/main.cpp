#include <iostream>
#include <set>

using namespace std;

int main()
{
    string str;
    int ans = 0;
    set <char> st;
    getline(cin,str);
    int length = str.size();
    for (int i=0 ; i<length ; i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            int currentLength = st.size();
            st.insert(str[i]);
            if(st.size() != currentLength){
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}
