#include <iostream>

using namespace std;

int main()
{
    string str1,str2,str3;
    int index;
    cin >> str1 >> str2 >> str3;
    int length1 = str1.size();
    int length2 = str2.size();
    int length3 = str3.size();
    for (int i=0 ; i<length1 ; i++){
        index = str3.find(str1[i]);
        if(index >= 0 && index < length3){
            str3.erase(index,1);
        }
        else {
            cout << "NO";
            return 0;
        }
    }
    for (int i=0 ; i<length2 ; i++){
        index = str3.find(str2[i]);
        if(index >= 0 && index < length3){
            str3.erase(index,1);
        }
        else {
            cout << "NO";
            return 0;
        }
    }
    if(str3.size()){
        cout << "NO";
    }
    else {
        cout << "YES";
    }
    return 0;
}
