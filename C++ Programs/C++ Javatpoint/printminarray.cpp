#include<iostream>
using namespace std;
void printmin(int arr[5]);
int main(){
    int arr1[5]={1,3,5,7,9};//declaring array1
    int arr2[5]={2,4,6,8,0};//declaring array2
    printmin(arr2);
    cout<<"main function ends"<<endl;
    return 0;
}
void printmin(int arr[5]){
    int min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout<<"min is :"<<min<<endl;
}