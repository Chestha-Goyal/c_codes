#include <iostream>
using namespace std;

struct Dept 
{
    int did;
    string dname;
};

struct Employee             //referencal intergrity constant  dept ka rpimary key yaha forign key kam kre
{
    int eid;
    float salary;
    struct Dept d;          //same thing in class is called aggregation or hasarealtion (ik class ka object dusri me craete kru)
};

void init(Employee e);   //structure variable  employee sructure ka reference // variable  passing structure as a argument
void display(Employee e); 

int main()
{
    Employee e;
    init(e);
    display(e);
    
    return 0;									ERROR AYA GA GARBAGE VALUE ME
}

void init(Employee e)
{
    cout<<"Enter employee id and salary: ";
    cin>>e.eid>>e.salary;
    cout<<"Enter dept id and dept name: ";
    cin>>e.d.did>>e.d.dname;                   //nested 
    
}

void display(Employee e)
{
    cout<<"Employee Details: ";
    cout<<"Eid: "<<e.eid<<endl;
    cout<<"Salary: "<<e.salary<<endl;
    cout<<"Dept Id: "<<e.d.did<<endl;
    cout<<"DepT Nmae: "<<e.d.dname<<endl;
}