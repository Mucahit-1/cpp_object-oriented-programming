#include <iostream>

using namespace std;

class student
{
private:
    string name;
    int age;
public:
    void setname(string isim){
        name = isim;
    }
    /*Encapsulation */
    void setage(int agee){
        if(agee <= 0){
            cout<<"this value is wronge"<<endl;
        }
        else{
            age = agee;
        }
    }
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
};

int main(){

    student student1;

    student1.setname("mucahit");
    student1.setage(23);
    cout<<student1.getname()<<endl;
    cout<<student1.getage()<<endl;

    return 0;
}