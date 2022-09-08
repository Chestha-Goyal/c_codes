#include <iostream>  
using namespace std;  
void printArray(int arr[5]);  
int main()  
{  
    int arr1[6] = { 1, 2, 3, 4, 5, 6 };    
    int arr2[6] = { 5, 15, 25, 35, 45, 55 };    
    printArray(arr1);   
    printArray(arr2);  
}  
void printArray(int arr[5])  
{  
    cout << "Print array elements:"<<endl;  
    for (int i = 0; i < 6; i++)  
    {  
        cout<<arr[i]<<" "<<endl;    
    }  
}  