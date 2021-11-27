#include<iostream>
using namespace std;
inline int add(int x,int y){
return(x+y);
}
int main(){
    int a,b;
    cout<<"Enter the 2 values to add: "<<endl;
    cin>>a>>b;
    int c= add(a,b);
    cout<<"The sum of the provided inputs is: "<<c<<endl;



    return 0;
}