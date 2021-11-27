#include<iostream>
using namespace std;
int main(){

    int x,fact;
    cout <<"start of program"<<endl;
    cout<<"Enter a number:"<<endl;
    cin>>x;
    fact=x;

    while (x>1)
    {
        x--;
        fact=fact*x;
    }
    cout<<"your answer is :"<<fact<<endl;








    return 0;
}