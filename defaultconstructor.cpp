#include <iostream>
using namespace std;

class Test
{
private:
    int x;
public:              //whenever we don't place any constructor by deafult it will automatically complier will place this
    //Test() {}  //Automatic default constructor
    Test()
    {
        x = 5;
    }
    void setX(){
        cout<<"Enter X: ";
        cin>>x;
    }
    int getX()
    {
        return x;
    }
};


int main()
{
    Test ob;  //implicitly invokes constructor
    cout<<"Data: "<<ob.getX()<<endl;
    ob.setX();
    cout<<"Data: "<<ob.getX()<<endl;
    return 0;
      
}