include <iostream>
using namespace std;

void maxLoop(int **arr,int **vis,int i,int j,int m,int n,int currCnt,int &count){
    if(i<0 || j<0 || i>=m || j>=n){
        return;
    }
    if(arr[i][j]==0){
        return;
    }
    if(vis[i][j]==1){
        count=max(count,currCnt);
        return;
    }
    vis[i][j]=1;
    maxLoop(arr,vis,i+1,j,m,n,currCnt+1,count);
    maxLoop(arr,vis,i-1,j,m,n,currCnt+1,count);
    maxLoop(arr,vis,i,j+1,m,n,currCnt+1,count);
    maxLoop(arr,vis,i,j-1,m,n,currCnt+1,count);
    vis[i][j]=0;
}

int main()
{
    int m;
    int n;
    cin>>m>>n;
    int *arr=new int[m];
    for(int i=0;i<m;i++){
        arr[i]=new int[n];
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    int *vis=new int[m];
    for(int i=0;i<m;i++){
        vis[i]=new int[n];
        for(int j=0;j<n;j++){
            vis[i][j]=0;
        }
    }
    
    
    int fAns = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==1){
                maxLoop(arr,vis,i,j,m,n,0,fAns);
            }
        }
    }
    cout<<fAns<<endl;
    return 0;
}