#include <iostream>

using namespace std;

class first{
    public:
        int x=10;
    private: // will work just in this class
        int y=20;
    protected: // will work here and in the inherited classes
        int z=30;        
};

class second : public first{ // here if we write protected public will be protected and the private will still same
    public:
        void display(){
            cout<<"z is protected and it is "<<z<<endl;
        }
       /* void print(){
            cout<<"y is private it is "<<y<<endl;
        }*/

};    


int main(){

        second ob1;
        ob1.display();
      //  ob1.print(); // it will not work because y is private

    return 0;
}