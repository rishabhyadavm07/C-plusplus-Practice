#include<iostream>
using namespace std;
int main(){

    cout<<"Program start"<<endl;

    int size;
    int *ptr;
    cout<<"Enter the number of inputs you want to give : "<<endl;
    cin>>size;
    ptr = new int[size];
    cout<<"Enter the values you want to store in array : "<<endl;
    for (int i = 0; i < size; i++)
    {
        
        cin>>ptr[i];
    }
    cout<<"The values that are going to be stored in array are: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<ptr[i]<<endl;
    }
    





    cout<<"Program end"<<endl;
    return 0;
}