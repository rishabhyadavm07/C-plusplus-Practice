#include<iostream>
using namespace std;
void printarray(int arr[5]);//declaring function
int main(){
    int arr1[5]={1,2,3,4,5};//initialising array1
    int arr2[5]={6,7,8,9,0};//initialising array2
    printarray(arr2);//calling fuction
    cout<<"main function ends"<<endl;
    return 0;
}
void printarray(int arr[5]){
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;//printing requested array
        
    }
    cout<<"printarray function ends"<<endl;
    
}