#include<iostream>
using namespace std;
int factorial(int v)
{
    if (v==0)
    {
        cout<<"entered 0"<<endl;
        return(1);
    }
    if (v<0)
    {
        cout<<"smaller than 0 "<<endl;
        return(0);
    }
    if (v>0)
    {
        cout<<"entered a positive integer. finding factorial";
        return(v*factorial(v-1));
    }
}

int main(){
    int fact,value;
    cout<<"Enter the number :";
    cin>>value;
    fact = factorial(value);
    cout<<"The Result is :"<<fact<<endl;
    
    return 0;
}