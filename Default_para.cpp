#include<iostream>
using namespace std;
int add(int a,int b,int c=0,int d=5){
    return(a+b+c+d);
}
int main(){
    cout<<"The sum of 1,2,3,4 is : "<<add(1,2,3,4)<<endl;
    cout<<"The sum of 1,2,0,5 is: "<<add(1,2)<<endl;

    return 0;
}