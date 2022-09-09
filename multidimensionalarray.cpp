#include <iostream>
using namespace std;

int main() {
  string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
  };
  letters[0][0] = "Z";
  
  //access the element
  cout << letters[0][2] <<endl;
  //change the element
  cout << letters[0][0];
  return 0;
}
