#include<iostream>
using namespace std;
int main(){

    int num,first=0,second=1,next;
    
    cout<<"Enter a Number: "<<endl;
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        cout<<first<<endl;
        next=first+second;
        first=second;
        second=next;
    }
    cout<<"program ended!!"<<endl;
    








    return 0;
}