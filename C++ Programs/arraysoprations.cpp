#include<iostream>
using namespace std;
int main(){

    int A[4];
    int B[4];
    int add[4],sub[4],mul[4];


    cout<<"Enter the values to be stored in the 1st array:"<<endl;
    for (int i = 0; i < 4; i++)
    {
        cin>>A[i];
    }
    
    cout<<"Enter the values to be stored in the second array:"<<endl;
    for (int i = 0; i < 4; i++)
    {
        cin>>B[i];
    }
    cout<<" "<<endl;
    cout<<"Addition"<<endl;
    cout<<"Answer: "<<endl;
    for (int i = 0; i < 4; i++)
    {
        add[i]=A[i]+B[i];
        cout<<add[i]<<" ";
    }
    cout<<" "<<endl;
    cout<<"Subtraction"<<endl;
    cout<<"Answer: "<<endl;
    for (int i = 0; i < 4; i++)
    {
        sub[i]=A[i]-B[i];
        cout<<sub[i]<<" ";
    }
    cout<<" "<<endl;
    cout<<"Multiplication"<<endl;
    cout<<"Answer: "<<endl;
    for (int i = 0; i < 4; i++)
    {
        mul[i]=A[i]*B[i];
        cout<<mul[i]<<" ";
    }
    










    return 0;
}