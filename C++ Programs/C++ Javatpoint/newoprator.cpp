#include<iostream>
using namespace std;
int main(){
    int var;
    int *ptr=new int;
    cout<<"enter the number to store in var variable : "<<endl;
    cin>>var;
    cout<<"enter the number to store in the ptr dynamically allocated pointer : "<<endl;
    cin>>*ptr;
    cout<<"var : "<<var<<endl<<"ptr : "<<*ptr<<endl;

    return 0;
}