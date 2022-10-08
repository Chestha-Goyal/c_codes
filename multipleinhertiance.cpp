#include <iostream>
using namespace std;

class A
{
public:
    void showA() {cout<<"Class A"<<endl;}
};

class B
{
public:
    void showB() {cout<<"Class B"<<endl;}
};

class C : public A,public B
{
public:
    void showC() {cout<<"Class C"<<endl;}
};

int main()
{
    C ob;
    ob.showA(); 
    ob.showB();
    ob.showC();
    
    return 0;
}