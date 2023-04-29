#include <iostream>

using namespace std;

class student{
    public:
    string name;

    void tellname(){
        cout<<"the name is "<<name<<endl;
    }

};

int main(){

    student student1;
    student student2;

    student1.name = "mucahit damlahi";
    student2.name = "mojahed";

    student1.tellname();
    student2.tellname();

    return 0;
}