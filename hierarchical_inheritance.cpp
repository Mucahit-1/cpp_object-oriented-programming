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
            person::print();
            cout<<"the grade is "<<grade<<endl;
        }        
};

class employee : public person{
    private:
        int salary;
    public:
        employee(string n , int a , int sa):person(n , a){
            salary=sa;
        }
        void print(){
            person::print();
            cout<<"the salary is "<<salary<<endl;
        }
    
};



int main(){

    person ob1("mojahed" , 23);
    student ob2("mucahit" , 24 , 80);
    employee ob3("damlahi" , 25 , 10000);
    ob3.print();


    return 0;
}
