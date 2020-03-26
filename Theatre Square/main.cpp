#include <iostream>

using namespace std;

int main()
{
    unsigned long long int tool,arz,kashi,arzj,toolj;
    cin>>tool>>arz>>kashi;
    if (kashi >= tool && kashi >= arz)
    {
        cout<<1;
        return 0;
    }
    else
    {
        if (kashi<=tool)
        {
            if (tool%kashi==0)
                toolj=tool/kashi;
            else
                toolj=(tool/kashi)+1;
        }
        if
            (kashi<=arz)
        {
            if (arz%kashi==0)
                arzj=arz/kashi;
            else
                arzj=(arz/kashi)+1;
        }
    }
    cout<<toolj*arzj;
    return 0;
}
