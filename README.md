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









## Program Outputs
1)<img width="320" alt="Screenshot 2024-09-15 at 9 22 13 PM" src="https://github.com/user-attachments/assets/d38b1f65-7a83-4cca-ad7c-d23290fef1e8">
