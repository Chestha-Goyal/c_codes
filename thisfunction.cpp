
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
  Test(int x)
  {
      this -> x = x;    //(ob1.x=x) pointer reference to the current object
  }
  //Copy constructor
//   Test(Test &t)
//   {
//       x = t.x;
//   }
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
  Test ob1(25);		// invoke parameterized constructor
  Test ob2(ob1);    // copy constructor
  cout<<"Data: "<< ob.getX()<<endl;
  cout<<"Data: "<< ob1.getX()<<endl;
  cout<<"Data: "<< ob2.getX()<<endl;    
  ob.setX();
  ob1.setX();
  cout<<"Data: "<<ob.getX()<<endl;
  cout<<"Data: "<<ob1.getX()<<endl;
  cout<<"Data: "<<ob2.getX()<<endl;
  
  Test ob3 = ob1; //shallow copy // invokes copy constructor
  cout<<"Data: "<<ob3.getX()<<endl;
  ob1.setX();
  cout<<"Data: "<<ob3.getX()<<endl;  //there is no chnge in value (deep copy)
  return 0;
}