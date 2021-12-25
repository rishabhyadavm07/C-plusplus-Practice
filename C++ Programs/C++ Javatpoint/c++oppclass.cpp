#include<iostream>
#include<string>
using namespace std;
class Employee
{
    public:
    int id;
    float salary;
    string department;

    void insert(int i,float s, string d){
    id = i;
    salary = s;
    department = d;
    }
    void display(){
        cout<<"id: "<<id<<endl<<"salary: "<<salary<<endl<<"department: "<<department<<endl;

    }
};
int main(){
    Employee e1;
    Employee e2;
    e1.insert(1,1200,"logs");
    e2.insert(2,1200,"watch");
    e1.display();
    e2.display();
    return 0;
}