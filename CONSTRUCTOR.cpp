#include <iostream>
using namespace std;

class A
{
public:
    A() {cout<<"Constructor A"<<endl;}
    ~A() {cout<<"Destructor A"<<endl;}
};

class B : public A
{
public:
    public:
    B() {cout<<"Constructor B"<<endl;}
    ~B() {cout<<"Destructor B"<<endl;}
};

int main()
{
    B ob;
}
