#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int k;
    cin>>k;
    while(k){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    stack<int>s;
    int ng[n],pg[n];
    for(int i=0;i<n;i++)
    {
        if(s.empty())
        {
            s.push(i);
            continue;
        }
        while(!s.empty() && arr[i]>arr[s.top()])
        {
            ng[s.top()]=i;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty())
    {
        ng[s.top()]=-1;
        s.pop();
    }
    for(int i=n-1;i>=0;i--)
    {
        if(s.empty())
        {
            s.push(i);
            continue;
        }
        while(!s.empty() && arr[i]>arr[s.top()])
        {
            pg[s.top()]=i;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty())
    {
        pg[s.top()]=-1;
        s.pop();
    }
    long long int ans=0;
    for(int i=0;i<n-1;i++)
    {
        int lim=ng[i];
        ans++;
        if(lim==-1)
        {
            for(int j=i+2;j<n;j++)
            {
                if(pg[j]>i)
                    break;
                else
                    ans++;
            }
        }
        else
        {
            for(int j=i+2;j<=lim;j++)
            {
                cout<<i<<" "<<j<<endl;
                if(pg[j]>i)
                    break;
                else
                    ans++;
            }
        }
    }
    cout<<ans;
    --k;
    }
    return 0;
}