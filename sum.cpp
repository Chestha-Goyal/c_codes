#include <iostream>
using namespace std;

int main() {
  int numbers[] = {5, 2, 79, 55, 26};
  int sum = 0;
  int count = 0;
  int average;

  cout << "The numbers are: "<<endl;
  for (const double &n : numbers) {
    cout << n << "  "<<endl;

    sum += n;

    ++count;
  }
  cout << "Sum = " << sum << endl;
  average = sum / count;
  cout << "Average = " << average << endl;

  return 0;
}