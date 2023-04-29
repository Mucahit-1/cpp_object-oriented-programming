#include <iostream>

using namespace std;

class A{
    private:
        string name;
        int age;
    public:
        A(string n , int a){
            name = n;
            age = a;
        }
        void print(){
            cout<<"the name is "<<name<<endl;
            cout<<"the age is "<<age<<endl;

        }
       
};

class B{
    private:
        string email;
    public:
        B(string email){
            this->email = email;
        }
        void print(){
            cout<<"the email is "<<email<<endl;
        }    
};

class C : public A , public B{//multible inheritance
    private:
        int grade;
    public:
        C(string n , int a , string email , int g):A(n,a),B(email)
        {
            grade = g;

        }
        void print(){
            //override function
            A::print();
            B::print();
            cout<<"the grade is "<<grade<<endl;
        }
};


int main(){

    A ob1("mojahed" , 23);
    B ob2("mojahed.da202@gmail.com");
    C ob3("mojahed" , 23 , "mojahed.da202@gmail.com",80);

    ob3.print();
    //ob3.A::print();//when we have functions have smae name in inheritance 


    return 0;
}