#include<iostream>
using namespace std;
int main(){
    int arr[3][3];  //declaration of 2D array   
    arr[0][0]=5;  //initialization 
    arr[0][1]=10;
    arr[0][2]=5;
    arr[1][0]=1;
    arr[1][1]=3;
    arr[1][2]=2;
    arr[2][0]=4;
    arr[2][1]=7;
    arr[2][2]=6;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<" end "<<endl;

    }
    
    
    
    
    
    
    
    
    
    return 0;

}