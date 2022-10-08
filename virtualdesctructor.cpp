#include <iostream>
using namespace std;

class A
{
public:
    A() {cout<<"Constructor A"<<endl;}
    virtual ~A() {cout<<"Destructor A"<<endl;}             // to call b also virtual use krna pdga
};

class B : public A
{
public:
    B() {cout<<"Contructor B"<<endl;} 
    ~B() {cout<<"Destructor B"<<endl;}

};
int main()
{
    //B b;
    //A *a = &b;
    A *a = new B();           //dynamically deallocte krna pdga
    delete a;               // b ka call nhui hoga due to static binding 
   
}