#include <iostream>

using namespace std;

class employee{
    private:
    string name;
    int salary;
    int id;

    public:
    /*constructor*/
    employee(string isim,int maas,int kimlik){
        name = isim;
        salary = maas;
        id = kimlik;
    } 
    
    void setname(string isim){
        name=isim;
    }
    void setsalary(int maas){
        salary=maas;
    }
    void setid(int kimlik){
        id=kimlik;
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

};

int main(){

    employee employee1("mojahed",10000,15);

    cout<<employee1.getname()<<endl;
    cout<<employee1.getsalary()<<endl;
    cout<<employee1.getid()<<endl;

    return 0;
}