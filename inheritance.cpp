#include <iostream>

using namespace std;

class person{
private:
    string name;
    int age;

public:
    void display(string name , int age){
        this->name = name;
        this->age = age;
        cout<<"the name is "<<name<<endl;
        cout<<"the age is "<<age<<endl;

    } 

};

class student : public person{ /*when we write public we inherit everything in the same state if we write private we inherit everything private*/
private:
    int grade;
public:
    void print(int grade){
        this->grade = grade;
        cout<<"the grade is :"<<grade<<endl;
    }
};    


int main(){

    student me;
    me.display("mojahed" , 50);

    return 0;
}