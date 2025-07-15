#include<iostream>
#include<vector>
using namespace std;
/*
class Teacher{
//property or attribute
private:
double salary;

public:
string name;
string dept;
string subject;

//Construtor

//  Non Parameterise
// Teacher(){
//    // cout<<"Hi, This is Paras Constructor"<<endl;
//    dept="ct";
// }

//parametrized

Teacher(string name, string dept,string s,double sal){
  this->  name=name; //this -> pointer
   this->  dept=dept;
   this-> subject=s;
  this->  salary=sal;
}


//Copy construcotor
//user made
Teacher (Teacher &orgobj){ //pass by refernce

    cout<<"i am custom copy constructouer"<<endl;
     this->  name= orgobj.name; 
   this->  dept=orgobj.dept;
   this-> subject=orgobj.subject;
  this->  salary=orgobj.salary;
}

//methods /member function

void changedept(string newDept){
    dept=newDept;
    
}

// //setter
// void setSalary(double s){
//     salary=s;
// }
// // getter (we cam acces the private salary in main function using this function )

// double getsalary(){
//      return salary;
// }

void getInfo(){
    cout<<"name: "<<name<<endl;
    cout<<"dept: "<<dept<<endl;
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
    // Teacher t1; //when ever we create any new object the constructor is called 
    // t1.name="Paras";
    // //t1.dept="ct";
    // t1.subject="dsa";
    // //t1.salary=2000000000;
    // t1.setSalary(200000);


    // cout<<t1.name<<endl;
    // cout<<t1.dept<<endl;
    // cout<< t1.getsalary()<<endl;

    //parametrized function call

    Teacher t1("paras","comp tech","dbms",232323234);
    //t1.getInfo();

    //copy constructor 
    

   // Teacher t2(t1); // default copy constructor -> call/invoke

   Teacher t2(t1);//now custom copy
    t2.getInfo();


    return 0;
}*/

// deep copy (dynamic alloaction of the memory ie heap memory)
class Student{
    public:
    string name;
    double *cgpaptr;

    Student(string name, double cgpa){
        this-> name=name;
        cgpaptr=new double; //give heap mem alloction by point it using new
        *cgpaptr=cgpa;
    }
 
Student(Student &obj){

    this->name=obj.name;
    cgpaptr=new double; //new mem allocated 
    *cgpaptr=*obj.cgpaptr; // pont toward new mem
}

    void getInfo(){
        cout<<"name :"<<name<<endl;
        cout<<"cgpa :"<<*cgpaptr<<endl;
    }

};

int main(){
   Student s1("paras",12);
   Student s2(s1);//"jayy kumar "
   s1.getInfo();
   // dereferncing  , cgpa allocation ie s2 has diff cgpa
   *(s2.cgpaptr)=9.3; //problem in shallow it change the  ptr which you dont change  , in this we want to change the s2 cgpa but s1 cgpa is alsp change

   s2.name="jay kumar";
   s2.getInfo();



    return 0;
}