#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int res[n];
        for(int i=0;i<n;i++)
        {
            bool not_found=1;
            for(int j=i-1;j>=0;j--)
            {
                if(a[j]<a[i])
                {
                    not_found=0;
                    res[i]=a[j];
                    break;
                }
            }
            if(not_found)
                res[i]=-1;
        }
        for(int i=0;i<n;i++)
            cout<<res[i]<<" ";
        cout<<"\n";
    }
    return 0;
}