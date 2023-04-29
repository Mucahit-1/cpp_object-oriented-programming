#include<iostream>
using namespace std;
 
class employee{
public:
    string *s;
    int *i;
    
    employee(string str , int ivalue){

        s = new string;
        i = new int;

        *s = str;
        *i = ivalue; 
        cout<<"Constructor executed"<<endl;
    }   
 
    ~employee(){
        /*when we delete the object pinter we should be care to delete the pointer of variable */
        delete s;
        delete i;
        cout<<"Destructor executed"<<endl;
    }
    void show(){
        cout<<"string value "<<*s<<" int value "<<*i;
    }
};

int main(){
     
    employee *ptr = new employee("mojahed" , 10);

    ptr->show();
    delete ptr;
       
    return 0;
}