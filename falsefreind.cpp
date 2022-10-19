#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        cin>>k;
        int a[n];
        vector<int> res;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int del=0;
        for(int i=0;i<n;i++)
        {
            if(i!=n-1&&a[i]<a[i+1]&&del<k)
            {
                del++;
                continue;
            }
            res.push_back(a[i]);
        }
        res.resize(n-k);
        res.shrink_to_fit();
        for(auto i=res.begin();i!=res.end();i++)
            cout<<*i<<" ";
        cout<<"\n";
    }
    return 0;
}