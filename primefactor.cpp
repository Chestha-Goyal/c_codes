#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=2;i<sqrt(n);i++){
        int count = 0;
        if((n%i)==0)
            while((n%i)==0){
                n=n/i;
                count++;
            }
            cout<<i<<"^"<<count<<endl;
    }
    if(n>1){
        cout<<n<<"^"<<1;
    }

    return 0;
}