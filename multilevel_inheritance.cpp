#include <iostream>

using namespace std;

class person{
    private:
        string name;
        int age;
    public:
        person(string n , int a){
            name=n;
            age=a;
        }
        void print(){
            cout<<"the name is "<<name<<endl;
            cout<<"the age is "<<age<<endl;
        }        
};

class student : public person{
    private:
        int grade;
    public:
        student(string n , int a , int g):person(n,a){
            grade=g;
        }
        void print(){
            cout<<"the grade is "<<grade<<endl;
        }        
};

class employee : public student{
    private:
        int salary;
    public:
        employee(string n , int a , int g , int sa):student(n , a , g){
            salary=sa;
        }
        void print(){
            person::print();
            student::print();
            cout<<"the salary is "<<salary<<endl;
        }
    
};



int main(){

    employee ob1("damlahi" , 25 ,80 , 10000);
    ob1.print();


    return 0;
}
