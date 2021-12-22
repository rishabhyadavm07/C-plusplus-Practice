#include<iostream>
using namespace std;
int main(){
    void *ptr;
    int *intptr;
    int data=10;
    ptr=&data;
    cout<<"the value of the data variable is "<<data<<endl;
    cout<<"the value of the void ponter is "<<ptr<<endl;
    cout<<"the value at the stored address is "<<ptr<<endl;
    intptr=(int *)ptr;
    cout<<"Value of the integer pointer is "<<*intptr<<endl;



    return 0;
}