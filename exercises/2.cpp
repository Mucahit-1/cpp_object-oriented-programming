#include <iostream>

using namespace std;

class worker{
    private:
        string name;
        int salary;
    public:
        worker(){
            cout<<"enter your name :"<<endl;
            cin>>name;
            cout<<"enter your salary :"<<endl;
            cin>>salary;
        }
    friend void avg(worker worker1 , worker worker2 , worker worker3);        
};



void avg(worker worker1 , worker worker2 , worker worker3){

    int avrage = (worker1.salary + worker2.salary + worker3.salary)/3;
    cout<<"the avrage of the salaries = "<<avrage;
}

int main(){

    worker worker1 , worker2 , worker3;
    avg(worker1 , worker2 , worker3);
    return 0;
}