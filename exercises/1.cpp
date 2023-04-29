#include <iostream>

using namespace std;


class car{
    private:
        int price;
        string name;
    public:
        car( string n , int p){
            price = p;
            name = n;
        }   
        void display();

        friend void increase(car car1);
};

void increase(car car1){
    cout<<"the old price is "<<car1.price<<endl;
    car1.price += 1000;
    cout<<"the new price is "<<car1.price<<endl;

}

void car :: display(){
    cout<<"the name of the car is "<<name<<endl;
    cout<<"the price of the car is "<<price<<endl;

}

int main(){

    car car1("bmw" , 15000);
    car1.display();
    increase(car1);
    

    return 0;
}