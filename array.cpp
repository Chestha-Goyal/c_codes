
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minMoves(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int res=0;
    for(int i=1;i<nums.size();i++){
        res+=nums[i]-nums[0];
    }
    return res;
}


int main(){
    vector<int> v;
    
    int n;
    cin>>n;
    int ele;
    for(int i=0;i<n;i++){
        cin>>ele;
        v.push_back(ele);
    }
    cout<<minMoves(v);
    
    
    
}
