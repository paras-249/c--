#include<iostream>
#include<vector>
using namespace std;

class Teacher{
//property or attribute
private:
double salary;

public:

string name;
string dept;
string subject;

//methods /member function

void changedept(string newDept){
    dept=newDept;
    
}

//setter
void setSalary(double s){
    salary=s;
}
// getter (we cam acces the private salary in main function using this function )

double getsalary(){
     return salary;
}

};


//Enacapuslation is a just a class ie wrapping the data and member function into the single unit called as class
class Account{
    private:
    double balance;
    string password;   // data hiding in encapsulation 

    public:

    string username;
    string acountId;
};


int main(){
    Teacher t1; //when ever we create any new object the constructor is called 
    t1.name="Paras";
    t1.dept="ct";
    t1.subject="dsa";
    //t1.salary=2000000000;
    t1.setSalary(200000);


    //cout<<t1.name<<endl;
    cout<< t1.getsalary()<<endl;

    return 0;
}