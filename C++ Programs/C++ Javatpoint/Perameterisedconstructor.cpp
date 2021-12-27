#include<iostream>
#include<string>
using namespace std;
class Employee{
    public:
    int id;
    string name;
    float salary;
    Employee(int i,string n,float s){//creation of a function
        id=i;
        name=n;
        salary=s;
    }
    void Display(){
        cout<<id<<" "<<name<<" "<<salary<<endl;//display function
    }
};
int main(){
    Employee e1=Employee(2,"rishabh",23000);
    Employee e2=Employee(1,"chirag",54000);
    e1.Display();
    e2.Display();
    return 0;
}