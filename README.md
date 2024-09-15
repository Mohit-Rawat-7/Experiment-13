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








## Program Outputs
1)<img width="320" alt="Screenshot 2024-09-15 at 9 22 13 PM" src="https://github.com/user-attachments/assets/d38b1f65-7a83-4cca-ad7c-d23290fef1e8">
<br>2)<img width="304" alt="Screenshot 2024-09-15 at 9 34 16 PM" src="https://github.com/user-attachments/assets/ea79fd5a-7940-444c-aa84-6d0f68a699f5">
