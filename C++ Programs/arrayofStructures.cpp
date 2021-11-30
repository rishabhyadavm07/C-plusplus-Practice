#include<iostream>
#include<string>
using namespace std;
struct person
{
    string name; 
    int age;
    double salary;
};
int main(){

    person p[2];
    for (int i = 0; i < 2; i++)
    {
        cin>>p[i].name;
        cin>>p[i].age;
        cin>>p[i].salary;
    }
    person *ptr=&p1;
    for (int i = 0; i < 2; i++)
    {
        cout<<"name: "<<p[i].name<<endl;
        cout<<"age: "<<p[i].age<<endl;
        cout<<"salary: "<<p[i].salary<<endl;

    }
    
    






    return 0;
}