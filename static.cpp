
#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    float mark;
    int cls = 7;
    
    void init();
    void show();
    void update_cls(int x);
    {
        cls = 8;
    }
};

int Student :: cls = 7;

void Student :: init()
{
    cout<<"Enter Student Roll and marks: ";
    cin>>roll>>mark;
}
void Student :: show()
{
    cout<<"Student Details: "<<endl;
    cout<<"Roll no: "<<roll<<endl;
    cout<<"Marks: "<<mark<<endl;
    cout<<"Class: "<<cls<<endl;
}

int main()
{
    Student s1, s2;
    s1.init();
    s1.show();
    s2.init();
    s2.show();
    
    s1.update_cls(8);
    s1.show();
    s2.show();
    
    return 0;
}
