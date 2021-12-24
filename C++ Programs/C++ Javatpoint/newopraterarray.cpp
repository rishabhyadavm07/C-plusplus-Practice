#include<iostream>
using namespace std;
int main(){
    int size;
    int *ptr=new int[size];
    cout<<"enter the size of the array you want to create : "<<endl;
    cin>>size;
    cout<<"enter the components you want to store in the array : "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>ptr[i];

    }
    cout<<"printing the stored array "<<endl;
    for (int j = 0; j < size; j++)
    {
        cout<<ptr[j]<<endl;
    }
    cout<<"end of program"<<endl;
    for (int a = 0; a < 1; a++)
    {
        
        cout<<"deleting the allocated memory ie: arr"<<endl;
        delete ptr;
        cout<<"deleted"<<endl;

    }
    
    




    return 0;
}