#include <iostream>

using namespace std;


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int rem,ans=0,i;
	    string n;
	    cin>>n;
	    for(i=0;i<n.size();i++){
	       // rem=n%10;
	        if(n[i]!='7' && n[i]!='4')
	        ans++;
	       // n=n/10;
	    }
	    cout<<ans<<" ";
	}
	return 0;
}