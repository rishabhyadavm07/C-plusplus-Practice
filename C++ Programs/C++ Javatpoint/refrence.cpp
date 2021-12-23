#include<iostream>
using namespace std;
int main(){
    int a=2;//declaring a data integer data type
    int &ref=a;//initialising a refrence variable
    cout<<"Enter any value to be stored in int(A) : "<<endl;
    cin>>a;
    cout<<"The value of a is "<<ref<<endl;
    return 0;
}