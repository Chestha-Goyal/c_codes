#include <iostream>
using namespace std;

class Test
{
private:
    int x;
public:
    void setX(int x) { this -> x = x; }         //freind function can access the private member and protected of class
    friend void show();                         //show is not a member of class test show is basically a freind function
}; 

void show()                         //class ka member nhu hai to scope nhi use hoga
{
    cout<<"Data: "<<x<<endl;            //private member of access class
}

int main()
{
    Test ob;
    ob.setX(20);
    show();             //normal call hoga
}