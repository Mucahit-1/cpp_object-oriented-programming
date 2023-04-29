#include <iostream>

using namespace std;

class Student{
private:
    string name;
    int age;
    int grade;

public:
    Student(string name , int age , int grade){
        this->name = name;
        this->age = age;
        this->grade = grade;
    }
    friend class test;
   // friend void showinfo(Student student); /*when we want to access to the private data by an internal function we use the keyword friend*/
};

class test{
public:
    static void showinfo(Student student){
        cout<<student.name<<" "<<student.age<<" "<<student.grade<<endl;
    }
};
/*void showinfo(Student student){
    cout<<student.name<<" "<<student.age<<" "<<student.grade<<endl;
}*/

int main(){

    Student student1("mucahit damlahi" , 23 , 90);
    test::showinfo(student1);
    //showinfo(student1);    

    return 0;
}