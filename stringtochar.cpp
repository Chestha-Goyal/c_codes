// CPP program to convert string
// to char array
#include <iostream>
#include <cstring>

using namespace std;
int main()
{
	string s = "abcdefghr";

	int n = s.length();
	char char_array[n + 1];
	strcpy(char_array, s.c_str());

	for (int i = 0; i < n; i++)
		cout << char_array[i];

	return 0;
}
