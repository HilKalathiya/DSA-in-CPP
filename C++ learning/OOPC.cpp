#include <bits/stdc++.h>
using namespace std;

class Car{
    public:
        string brand;
        string model;
        int year;
        Car(string brand , string model , int year){
            this->brand = brand;
            this->model = model;
            this->year = year;
        }
        Car(){};
        void display();
};

void Car::display(){
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
    cout << "this is defind form out side of class.";
}

int main(){
    Car c1;
    c1.brand = "Porche";
    c1.model = "911";
    c1.year = 2020;
    c1.display();

    Car c2("Ford" , "Mustang" , 1969);
    c2.display();

}