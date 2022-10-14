#include <iostream>
using namespace std;

int hcf(int x, int y) {
  if (y == 0)
    return x;
  return hcf(y, x%y);
}

int main() { 
  int x = 250;
  int y = 475;

  cout<<"HCF of "<<x<<" and "<<y<<" is: "<<hcf(x,y);
  return 0;
}