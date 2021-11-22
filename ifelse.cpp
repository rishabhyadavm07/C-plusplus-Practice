#include<iostream>
using namespace std;
int main(){
    int a;
    cout<< "enter the number you want to check: ";
    cin >> a;
    if (a<0)
    {
        cout <<"the number is negetive !";
    }
    else if (a>0)
    {
        cout<< "the number is positive !";
    }
    else if (a=0)
    {
        cout << "you have provided me with a zero !";
    }
    return 0;
}