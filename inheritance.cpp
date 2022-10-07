#include <iostream>
using namespace std;

class Animal
{
    public:
    void run() {cout<<"Running"<<endl;}         
}; 
class Lion : public Animal                             //visibility mode mainly use public   
{
public:
    void roar() {cout<<"Roaring"<<endl;}
};

int main()
{
    Lion li;
    li.roar();
    li.run();
}