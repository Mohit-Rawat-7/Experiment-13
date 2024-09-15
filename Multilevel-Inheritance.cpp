//Mohit Singh Rawat
//23070123086
#include <iostream>
using namespace std;
class Subject { 
public:
    void speak() {
        cout << "Subject is C++ and Data Structures" << endl;
    }
};
class Experiment : public Subject { 
public:
    void study() {
        cout << "Experiment number is 13" << endl;
    }
};
class Topic : public Experiment { 
public:
    void research() {
        cout << "Topic for experiment is Inheritance" << endl;
    }
};
int main() {
    Topic exp;
    exp.speak();    
    exp.study();    
    exp.research(); 
    return 0;
}
