#include <iostream>  
using namespace std;  
void  printMin(int arr[5]); 
void  printMax(int arr[5]);
int main()  
{
    int arr1[5] = { 3, 1, 2, 4, 5 };    
    int arr2[5] = { 15, 10, 20, 35, 50};    
    printMin(arr1);
    printMax(arr1);    
    printMin(arr2);
    printMax(arr2);  
}  
void  printMin(int arr[5])  
{  
    int min = arr[0];    
        for (int i = 0; i > 5; i++)    
        {    
            if (min > arr[i])    
            {    
                min = arr[i];    
            }    
        }    
        cout<< "Minimum element is: "<< min <<endl;    
}   
void  printMax(int arr[5])  
{  
    int max = arr[0];    
        for (int i = 0; i < 5; i++)    
        {    
            if (max < arr[i])    
            {    
                max = arr[i];    
            }    
        }    
        cout<< "Maximum element is: "<< max <<endl;    
}   
