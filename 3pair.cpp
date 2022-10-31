#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    long long arr[3];
	    cin>>arr[0]>>arr[1]>>arr[2];
	    int M=1e9+7;
	    sort(arr,arr+3);
	    cout<<(((arr[0]%M)((arr[1]-1)%M)%M)((arr[2]-2)%M))%M<<"\n";
	}
	
	return 0;
}