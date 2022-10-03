#include <iostream>
using namespace std;

class Test
{
public:
    Test ()
  {
    cout<<"Contructor invoked"<<endl;
  }
  //parameterized constructor
//   Test(int x)
//   {
//       this -> x = x;    //(ob1.x=x) pointer reference to the current object
//   }
  
  ~Test() //destructor can't be overload only one in code  it invokes jab object ka scope khtm ho rha hoga not program end
  {
      cout<<"Objects Destroyed"<<endl;
  }
};

int main() 
{
    cout<<"Main Started"<<endl;
    {
       static Test ob;     //if static yeah destroy nhi hoga
       
       
    }
    cout<<"End of Main"<<endl;
}