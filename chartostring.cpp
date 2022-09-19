#include <bits/stdc++.h> 
using namespace std; 


int main() 
{ 
	char arr[] = { 'J', 'O', 'U', 'R', 'N', 'A', 'L', 'D', 'E', 'V' }; 
	
	int size_arr = sizeof(arr) / sizeof(char); 
	string str = ""; 
	for (int x = 0; x < size_arr; x++) { 
		str = str + arr[x]; 
	} 
	cout<<"Converted char array to string:\n";
	cout << str << endl; 
	return 0; 
}