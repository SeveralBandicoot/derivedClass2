#include <iostream>
#include <string>
using namespace std;
//setting up the class
class animal{
    protected:
        string name;
        string animalgroup;
    public:
        animal(string n, string ag){
            name = n;
            animalgroup = ag;
        }
    virtual void printName(){
        cout <<"This is a "<< name <<"."<< endl;
        cout <<"It is a "<< animalgroup <<"."<< endl;
    }
};

class capybara : animal { // new capybara class derived from animal 
    public: 
        capybara(string name, string ag) : animal(name, ag) {}
     virtual void printName() {
        cout <<"This is a "<< name <<"."<< endl;
        cout <<"It is a "<< animalgroup <<"."<< endl;
    }
};
