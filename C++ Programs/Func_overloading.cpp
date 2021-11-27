#include<iostream>
using namespace std;
int add(int a,int b){
    cout<<"1"<<endl;
    return(a+b);
}
double add(double a,double b){
    cout<<"2"<<endl;
    return(a+b);
}
int add(int a,int b,int c){
    cout<<"3"<<endl;
    return(a+b+c);
}
double add(int a,double b){
    cout<<"4"<<endl;
    return(a+b);
}
double add(double a,int b){
    cout<<"5"<<endl;
    return(a+b);
}
int main(){
    
    cout<<add(4,3.5)<<endl;
    
    
    
    
    
    
    return 0;
}