# Experiment-13
## Program Codes
1:-
~~~ javascript
//Mohit Singh Rawat
//23070123086
#include <iostream>
using namespace std;
//Parent Class
class Car {
public:
    string year;
    void car() {
        cout << "You have a BMW car." << endl;
        cout<<"Please enter year of purchase: ";
        cin >> year;
    }
};
//Child class
class Model : public 
Car {
public:
    void amaze() {
        cout << "Car model is M Series bought in "<< year <<endl;
    }
};
int main(){
    Model st;
    st.car();
    st.amaze();
    return 0;
}
~~~
2:-
~~~ javascript
//Mohit Singh Rawat
//23070123086
#include <iostream>
using namespace std;

class College {
public:
    void college() {
        cout << "College Name: SIT, Pune " << endl;
    }
};

class Branch {
public:
    void branch() {
        cout << "Branch is ENTC" << endl;
    }
};

class Class : public College, public Branch {
public:
    void cLass() {
        cout << "Class is B division" << endl;
    }
};
int main() {
    Class c;
    c.college();  
    c.branch();  
    c.cLass();      
    return 0;
}
~~~
3)
~~~ javascript
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
~~~
4)
~~~ javascript

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

~~~






## Program Outputs
1)<img width="320" alt="Screenshot 2024-09-15 at 9 22 13 PM" src="https://github.com/user-attachments/assets/d38b1f65-7a83-4cca-ad7c-d23290fef1e8">
<br>2)<img width="304" alt="Screenshot 2024-09-15 at 9 34 16 PM" src="https://github.com/user-attachments/assets/ea79fd5a-7940-444c-aa84-6d0f68a699f5">
<br>3)<img width="310" alt="Screenshot 2024-09-15 at 10 20 28 PM" src="https://github.com/user-attachments/assets/0506e42e-5459-4082-bc41-642e11f55535">
<br>4)<img width="300" alt="Screenshot 2024-09-15 at 10 32 35 PM" src="https://github.com/user-attachments/assets/0a7f1037-250b-4235-926e-10e0f27b0fd3">


