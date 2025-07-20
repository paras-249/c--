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
}

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

//Destructor

~Student(){
    cout<<"hy, I delete every thing"<<endl;
    delete cgpaptr;
}

    void getInfo(){
        cout<<"name :"<<name<<endl;
        cout<<"cgpa :"<<*cgpaptr<<endl;
    }

};

int main(){
   Student s1("paras",12);
   //Student s2(s1);//"jayy kumar "
   s1.getInfo();
   // dereferncing  , cgpa allocation ie s2 has diff cgpa
//    *(s2.cgpaptr)=9.3; //problem in shallow it change the  ptr which you dont change  , in this we want to change the s2 cgpa but s1 cgpa is alsp change

//    s2.name="jay kumar";
//    s2.getInfo();



    return 0;
}*/

// Inheritance 


//Single level
/*
class Person{
    public:
    string name;
    int age;

    //user constructor parrametric constructor;
    Person(string name,int age){
        this-> name=name;
        this->age=age;
    }

//     Person(){
//  cout<<" parent Constructer run 1st"<<endl;
//     }
    // ~Person(){
    //     cout<<" Parents Destructor"<<endl;
    // }
};

class Student : public Person{
    public:
    int rollno;
     //Person paraetic construcotr ko Student constructor ke pehle call karaye by : classname and paaramter
    Student(string name,int age,int rollno) : Person(  name, age){  
        //cout<<" Child Constructer run 2nd"<<endl;
        this -> rollno=rollno;
    }
    // ~Student(){
    //     cout<<" Child Destructor"<<endl;
    // }

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<< age<< endl;
        cout<<"rollno: "<< rollno<<  endl;
    }
};


class Person{
    public:
    string name;
    int age;
};
// class Student:public Person{
//     public:
//     int rollno;
//};
 

//mutlipule inheritance

class Student{
     public:
     string name;
     int rollno;
};

class Teacher{
    public:
    string subject;
    int salary;
};

class TA: public Student,public Teacher{
    
};

//mutli level
class GradeStudent:public Student{
    public:
    string gradeArea;
};


//hierachical
class Person{
     public:
     string name;
     int rollno;
};
class  Student{
    public:
    int rollno;
};

class Teacher{
 public:
 string subject;
}
int main(){
   // Student s1("paras",67,1862);
    //s1.name="paras";
   // s1.age=21;
    //s1.rollno=39;

   GradeStudent s1;
        s1.name="paras";
   s1.age=21;
    s1.rollno=39;
    s1.gradeArea="Cyber Security";


TA t1;
t1.name="paaras";
t1.subject="Computer";
    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;

   // s1.getInfo();


    return 0;
}


//Polymorphism

class Print{
    public:


    //overloading
    void show(int x){
        cout<<" int :"<< x<< endl;

    }
     void show(string  ch){
        cout<<" string :"<< ch<< endl;
        
    }
};



//overriding
class Parents{
    public:
    void getInfo(){
        cout<<" parent class"<<endl;

    }

    //virtual function
    virtual  void hello(){
        cout<<" hello from parent"<<endl;

    }
};
class Child :public Parents{
    public:
    void getInfo(){
        cout<<" Child class"<<endl;

    }
    //redefine of virtual function
     void hello(){
        cout<<" hello from child"<<endl;
        
    }
};



//Abstarction

class Shape{ //abstract class
    virtual void area()=0;//pure virtual function
};

class Circle: public Shape{
    public:
    void area(){
        cout<<" area of circle\n"<<endl;
    }
};



//Static keyword

// void fun(){
//     static int x=0;//initalization of static keyword - 1 time run only
//     cout<<" the x= "<<x<<endl;
//     x++;
// }
class A{
    public:
    int x;


    void incX(){
        x=x+1;
    }

};*/

//static object

class ABC{
    public:

    ABC(){
        cout<<"Consturctor\n";
    }
   ~ ABC(){
        cout<<"Destuctore\n";
    }
};

int main(){

//     Print s1;
//     //s1.show(101);//compile time poly.
//  s1.show("abc");


// if The obj of child waas created then its functions has more privoriy i.e. its override the function of Parent
// Child c1;
// c1.hello();
// c1.getInfo();

// Circle a;
// a.area();

// fun();
// fun();
// fun();

// A obj;
// A obj2;
// obj.x=0;
// obj2.x=10;
// cout<<obj2.x<<endl;
// obj.incX();
// cout<<obj.x<<endl;

if(true){
    static ABC obj;
}
cout<<" end of main fnx \n";

    return 0;
}