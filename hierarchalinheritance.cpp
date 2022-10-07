#include <iostream>
using namespace std;

class Animal
{
    public:
    void run() {cout<<"Running"<<endl;}         
}; 
class Lion : public Animal                            
{
public:
    void roar() {cout<<"Roaring"<<endl;}
};

class Dog : public Animal
{
public:
    void bark() {cout<<"Barking"<<endl;}
};

int main()
{
    Lion li;
    li.roar();
    li.run();
    
    Dog d;
    d.bark();
    d.run();
    
    //d.roar();               //error dega
}
