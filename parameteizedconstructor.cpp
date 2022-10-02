#include <iostream>
using namespace std;

class Test
{
private:
  int x;
public:			//whenever we don't place any constructor by deafult it will automatically complier will place this
  //Test() {}  //Automatic default constructor
  //default constructor
    Test ()
  {
    x = 5;
  }
  //parameterized constructor
  Test(int a)
  {
      x = a;
  }
  void setX ()
  {
    cout << "Enter X: ";
    cin >> x;
  }
  int getX ()
  {
    return x;
  }
};


int main ()                 //public me rkhna hai constructor
{
  Test ob;			//implicitly invokes constructor
  Test ob1 (25);		// invoke parameterized constructor
  cout<<"Data: "<< ob.getX()<<endl;
  cout<<"Data: "<< ob1.getX()<<endl;
  ob.setX();
  ob1.setX();
  cout<<"Data: "<<ob.getX()<<endl;
  cout<<"Data: "<<ob1.getX()<<endl;
  return 0;

}