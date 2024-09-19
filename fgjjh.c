#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>n>>s;
    string st="";
    int out=0;
    for (auto i:s)
    {
        if (i>='0'&&i<='9')
        {
            out=out*10+i-'0';
            st+=i;
            out%=n;
        }
    }
    bool f=1;
    while(st.size()!=1&&st[0]=='0')
    {
        st.erase(st.begin());
    }
    if (out)
    {
        for(auto i:s)
        {
            if (!(i>='0'&&i<='9'))cout<<i;
        }
        cout<<endl;
    }
    else cout<<st<<endl;

    return 0;
}

