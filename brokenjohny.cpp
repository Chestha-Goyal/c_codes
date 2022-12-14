#include<bits/stdc++.h>
using namespace std;
int  val[20],decr[20];
 int n;
 long long int  dp[1<<18];
 #define inf -100000000000000

long long int  compute(int mask,int step)
{
 int ret=0;
 for(int i=0;i<n;i++)
  {
    if(!(mask  & (1<<i)))
     {
       ret+=val[i]-i*decr[i]*step;
      
     }
  }
 // cout<<" returning "<<ret<<endl;
  return ret;
}

long long int solve(int mask,int step)
 {
  if(step>=n) return 0;
  
 // cout<<" mask "<<mask<<" step "<<step<<endl;
   if(dp[mask]!=-1)
    {
      return dp[mask];
   }
   else
   {
      long long int  ret=inf;
    for(int i=0;i<n;i++)
     {
       if(!(mask & (1<<i)))
         {
             
          long long int comp=compute(mask,step)+((n-step-1))*(val[i]-decr[i]*step*i);
   //        cout<<" covering "<<i<<" comp "<<comp<<endl;
          ret=max(ret,comp+solve(mask | (1<<i),step+1));
      }
     }
     // cout<<mask<<" "<<ret<<endl;
    dp[mask]=ret; 
    return ret;
   }
 }

int main()
 {
  memset(dp,-1,sizeof dp);
  
   cin>>n;
    for(int i=0;i<n;i++)
     {
         cin>>val[i];
  }
  for(int i=0;i<n;i++)
   {
      cin>>decr[i];
   }
 long long int  ans=solve(0,0);
   cout<<ans<<endl;
  
 }
