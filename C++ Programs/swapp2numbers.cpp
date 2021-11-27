#include<iostream>
using namespace std;
int main(){

    int x,y,temp;
    x=7;
    y=9;
    cout << "the values before swapping :"<<endl;
    cout <<"x :"<<x<<endl;
    cout << "y :"<<y<<endl;
    cout << "Now swapping..."<<endl;
    temp=x;
    x=y;
    y=temp;
    cout<<"the values after swapping:"<<endl;
    cout<<"x :"<<x<<endl;
    cout<<"y :"<<y<<endl;

    cout<<"program completed!"<<endl;






    return 0;
}