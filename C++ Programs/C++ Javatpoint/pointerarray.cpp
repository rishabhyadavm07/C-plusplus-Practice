#include<iostream>
using namespace std;
int main(){
    int *ptr;//declaring pointer
    int arr[10];//declaring array
    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter the "<<i<<"th number to be stored in the array: "<<endl;
        cin>>arr[i];//taking input in array
    }
    for (int y = 0; y < 10; y++)
    {
        if (y==0)
        {
            cout<<"Printing array to confirm the elements: "<<arr[y]<<endl;//printing  array for confirmation
        
        }
        else
        {
            cout<<arr[y]<<endl;
        }
        
    }
    ptr=arr;
    cout<<"Value of *ptr : "<<*ptr<<endl;//Printing values to confirm 
    cout<<"Value of *arr : "<<*arr<<endl;//Printing values to confirm 
    return 0;
}