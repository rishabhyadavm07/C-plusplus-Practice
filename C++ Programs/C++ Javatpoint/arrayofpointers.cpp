#include<iostream>
using namespace std;
int main(){
    int *arrptr[5];//declaring array of pointers
    int arr[5];//declaring array
    cout<<"Enter the numbers to be stored in the array : "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];

    }
    for (int j = 0; j < 5; j++)
    {
        arrptr[j]=&arr[j];//adding the address of each element in the pointer array
    }
    cout<<"Printing *arrptr : "<<endl;
    for (int a = 0; a < 5; a++)
    {
        cout<<*arrptr[a]<<endl;//printing the value present at each address in array 
    
    }
    
    return 0;
}