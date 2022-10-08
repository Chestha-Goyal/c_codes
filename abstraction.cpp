#include <iostream>
using namespace std;

class Music
{
public:
    virtual void bass() = 0;        //pure virtual finction
    void play() {cout<<"Playing Music"<<endl;}
};
class MusicDevice :  public Music       //child class of abstract class 
{
public:         //jab bhi ham child bnte hai to parent ke sara abstract methods call krne pdge wrna child vhi abstract class bn jaata hai
    void bass() {cout<<"Extra Bass"<<endl;}         //only virtual ko hi krta hai
};


class MusicPlayer
{
private:
    MusicDevice md;
public:
    void playMusic()
    {
        cout<<"Starting playing...."<<endl;
        md.play();
        md.bass();
    }
};

int main()
{
    MusicPlayer mp;
    mp.playMusic();
 }