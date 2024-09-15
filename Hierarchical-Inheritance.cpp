//Mohit Singh Rawat
//23070123086
#include <iostream>
using namespace std;
class Class { 
public:
    char division;
    string name;
    void EB() {
        cout<<"Please enter your class: ";
        cin>>division;
    }
    void names(){
        cout<<"Please enter your name: ";
        cin>>name;
    }
    void display(){
        cout << "Student is in AIML-" << division << endl;
    }
};
class Student1 : public Class { 
public:
    void Name1() {
        cout <<"Student name is "<<name<< endl;
    }
};

class Student2 : public Class {
public:
    void Name2() {
        cout <<"Student name is "<<name<< endl;
    }
};
int main() {
    Student1 d;
    Student2 c;
    d.EB();  
    d.names();
    c.EB();  
    c.names();
    d.display();
    d.Name1(); 
    c.display();
    c.Name2(); 
    return 0;
}
