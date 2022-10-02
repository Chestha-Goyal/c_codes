#include <iostream>
using namespace std;

class Test
{
protected:
    int x;
    int y;              //whenever we don't place any constructor by deafult it will automatically complier will place this

};
class TestChild : public Test       //testchild is child of test class
{
    //TestChild() {}    //automatic default constructor  //bs object call krta hai 
    //deflaut constructor --> name same as class name but it doesn't have a return 
    //agar initail value chtebhai to constructor use krna pdga
public:
    void init()
    {
       cout<<"Enter value of X and Y: ";
       cin>>x>>y;
    }
    void show()
    
    {
        cout<<"Data: "<<x<<" "<<y<<endl;
    }
};

int main()
{
    TestChild tc;
    tc.init();
    tc.show();
    return 0;
      
}
