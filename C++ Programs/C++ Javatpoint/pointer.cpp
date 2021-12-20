#include<iostream>
using namespace std;
int main(){
    int number=3;
    int *p;
    cout<<&number<<endl;
    p = &number;
    cout<<"number is - "<<number<<endl;
    cout<<"value of pointer p - "<<*p<<endl;
    cout<<"value of p - "<<p<<endl;
    return 0;
}