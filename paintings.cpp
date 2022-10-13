#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
 
int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);
 
ll t;
cin>>t;
while(t--){
    ll rows,cols;
    cin>>rows>>cols;
 
    ll q;
    cin>>q;
 
   ll miny=100005;
    ll maxy = 0;
 
    if(q==0){
        cout<<0<<"\n";
        continue;
    }
 
    for(ll i=0;i<q;i++){
        ll x,y;
 
        cin>>x>>y;
        miny=min(miny,y);
        maxy=max(maxy,y);
    }
 
    cout<<maxy-miny<<" ";
 
 
}
 
return 0;
}