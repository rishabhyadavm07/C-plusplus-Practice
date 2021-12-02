#include<iostream>
#include<istream>
using namespace std;
struct person
{
    //making structure named person
    char name[100];
    int age;
    double salary;
};
int main(){

    person p1;
    cout<<"Enter the requested details : "<<endl<<"Name : "<<endl;
    cin.getline(p1.name,100);
    cout<<"Enter your age : "<<endl;
    cin>>p1.age;
    cout<<"Enter your salary: "<<endl;
    cin>>p1.salary;

    cout<<"Thankyou for entering the details !"<<endl<<endl;
    //printing the details 
    cout<<"Your details:"<<endl;
    cout<<"Name : "<<p1.name<<endl;
    cout<<"Age: "<<p1.age<<endl;
    cout<<"Salary: "<<p1.salary<<endl;
    return 0;
}