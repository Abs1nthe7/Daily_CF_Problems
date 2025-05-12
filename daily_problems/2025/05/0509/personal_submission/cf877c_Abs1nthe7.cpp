#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void sol()
{
    int n;cin>>n;
    vector<int>ans;
    vector<int>j,o;
    for(int i=1;i<=n;++i)
    {
        if(i%2)j.push_back(i);
        else o.push_back(i);
    }
    if(j.size()<o.size())
    {
        cout<<j.size()*2+o.size()<<endl;
        for(int c:j)
        {
            cout<<c<<' ';
        }
        for(int c:o)
        {
            cout<<c<<' ';
        }
        for(int c:j)
        {
            cout<<c<<' ';
        }
    }
    else
    {
        cout<<o.size()*2+j.size()<<endl;
        for(int c:o)
        {
            cout<<c<<' ';
        }
        for(int c:j)
        {
            cout<<c<<' ';
        }
        for(int c:o)
        {
            cout<<c<<' ';
        }
    }
    cout<<endl;
    return;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int _=1;
    while(_--)sol();
    return 0;
}
