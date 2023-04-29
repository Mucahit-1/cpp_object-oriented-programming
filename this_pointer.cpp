#include <iostream>

using namespace std;

class employee{
    private:
    string name;
    int salary;
    int id;

    public:
    employee(){    /*it is a default constructor if we do not define a constructor there is a one defined by IDE behined the seen*/

        this->name  = "bilgi yok";
        this->salary = 0;
        this->id = 0;
    }
    /*constructor*/
    employee(string name,int salary,int id){
        this->name = name;
        this->salary = salary;
        this->id = id;
    } 
       employee(string name,int salary){
        this->name = name;
        this->salary = salary;
        this->id = 0;
    } 
    
    
    void setname(string name){
        this->name=name;
    }
    void setsalary(int salary){
        this->salary=salary;
    }
    void setid(int id){
        this->id=id;
    }
    string getname(){
        return name;
    }
    int getsalary(){
        return salary;
    }
    int getid(){
        return id;
    }
    void showinfo(){
        cout<<getname()<<endl;
        cout<<getsalary()<<endl;
        cout<<getid()<<endl;
    }

};

int main(){

    employee employee1("mojahed",10000,15);
    employee employee2("mucahit" , 5000);
    employee employee3;

    employee1.showinfo();
    employee2.showinfo();
    employee3.showinfo();

    return 0;
}