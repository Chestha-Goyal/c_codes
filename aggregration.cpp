#include <iostream>
using namespace std;

class Address
{
    int pin;
public:
    Address(int p) { pin = p; }
 
};

class Person
{
    string name;
public:
    Person(string nm) {name = nm;}       //a is pointer to address class
    void show( Address *a)
    {
        cout<<name<<" "<<(*a).pin<<endl;
    }
};

int main()
{
    Address ad(140401);
    Person p("Ayush");                             //ad is not dependent on person
    p.show(&ad);
}
