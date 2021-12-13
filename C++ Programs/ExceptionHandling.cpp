#include<iostream>
using namespace std;
int main(){
    int numerator,denominator;
    float result;
    cout<<"Enter numerator and Denominator :"<<endl;
    cin>>numerator>>denominator;
    try
    {
        if (denominator==0)
        {
            throw denominator;
        }
        result=numerator/denominator; //division takes place here
    }
    catch(int ex){
        cout<<"Division not possible !"<<" You Entered : "<<ex<<endl;
    }
    cout<<"The result is: "<<result<<endl;
    return 0;
}