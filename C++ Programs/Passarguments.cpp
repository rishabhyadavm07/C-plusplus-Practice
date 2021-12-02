#include<iostream>
using namespace std;
void Passbyvalue(int x,int y){
    int z=x;
    x=y;
    y=z;
}
void Passbyrefrence(int &x,int &y){
    int z=x;
    x=y;
    y=z;
}
void Passbypointer(int *x,int *y){
    int z=*x;
    *x=*y;
    *y=z;
}
int main(){
    int a=4,b=7;
    cout<<"Before swapping "<<endl<<"a= "<<a<<endl<<"b= "<<b<<endl;

    Passbypointer(&a,&b);

    cout<<"after swapping "<<endl<<"a= "<<a<<endl<<"b= "<<b<<endl;
    
    
    
    
    
    return 0;
}