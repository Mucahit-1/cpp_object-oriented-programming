#include <iostream>

using namespace std;
class engineer;

class teacher{
    private:
        string name;
        int salary;
    public:
        teacher(){
            cout<<"enter your name MR.teacher:"<<endl;
            cin>>name;
            cout<<"enter your salary please :"<<endl;
            cin>>salary;
        }
        void display(){
            cout<<"the teacher name is :"<<name<<endl;
            cout<<"your salary is :"<<salary<<endl;
        }
        friend void add(teacher teacher1 , engineer engineer1);    
};

class engineer{
    private:
        string name;
        int salary;
    public:
        engineer(){
            cout<<"enter your name MR.engineer :"<<endl;
            cin>>name;
            cout<<"enter your salary please :"<<endl;
            cin>>salary;
        }
        void display(){
            cout<<"the enginner name is :"<<name<<endl;
            cout<<"your salary is :"<<salary<<endl;
        }
        friend void add(teacher teacher1 , engineer engineer1);    
    
};

void add(teacher teacher1 , engineer engineer1){
    if (teacher1.name == "ali"){
            teacher1.salary += 1000;
            cout<<"your new salary MR.ali is :"<<teacher1.salary<<endl;
    }
    else{
        cout<<"sorry your name is not ali we will not give you more"<<endl;
    }
    if (engineer1.name == "mojahed"){
        engineer1.salary += 1000;
        cout<<"your new salary MR.mojahed is :"<<teacher1.salary<<endl;
    }
    else{
        cout<<"sorry your name is not mojahed we will not give you more"<<endl;
    }
}    

int main(){

    teacher teacher1;
    engineer engineer1;
    
    teacher1.display();
    engineer1.display();

    add(teacher1 , engineer1);

    return 0;
}