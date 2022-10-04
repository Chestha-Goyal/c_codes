#include <iostream>
using namespace std;

class Address
{
public:
    int pin;
    Address() {};   //default mention krna pdga 
    Address(int p) { pin = p; }
 
};

class Person
{
    string name;
    Address ta; 
public:
    /*Person(string nm,  Address *a)
    {
        name = nm;       //a is pointer to address class
        this -> ta = *a;
    }*/
    Person(string nm) {name = nm; ta.pin = 123;}
    void show()
    {
        cout<<name<<" "<<ta.pin<<endl;
    }
};

int main()
{
    //Address ad(140401);
    //Person p("Ayush", &ad);                             //ad is not dependent on person
    Person p("Ayush");
    p.show();
}