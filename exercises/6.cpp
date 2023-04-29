#include <iostream>

using namespace std;


class student{
    private:
       int id , age;
       float mark;
       string name;
    
    public:
        student(){
            cout<<"enter your id , name , age ,mark"<<endl;
            cin>>id>>name>>age>>mark;
        }
        
        friend class university; 
};

class university{
    public:
        void print(student ob){
            cout<<"your id is "<<ob.id<<endl;
            cout<<"your name is "<<ob.name<<endl;
            cout<<"your age is "<<ob.age<<endl;
            cout<<"your mark is "<<ob.mark<<endl;
        }

};


int main(){

    student ob1;
    university student1;
    student1.print(ob1);

    return 0;
};