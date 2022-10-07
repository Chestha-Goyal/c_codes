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

class Club : public Lion
{
public:
    void play() {cout<<"Playing"<<endl;}
};

int main()
{
    Club c;
    c.play();
    c.roar();
    c.run();
}