#include <bits/stdc++.h>
using namespace std;

int uniquePaths(int m,int n){
	if(m==1 || n==1){
		return 1;
	}
	else{
		return uniquePaths(m-1,n)+uniquePaths(m,n-1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		cout<<uniquePaths(n,m)<<" ";
	}
	return 0;
}