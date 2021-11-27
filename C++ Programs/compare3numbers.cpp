#include<iostream>
using namespace std;
int main(){

    int x,y,z;
    cout << "Enter 1st number to compare: "<< endl;
    cin >> x;
    cout << "Enter 2nd number to compare: "<< endl;
    cin >> y;
    cout << "Enter 3rd number to compare: "<< endl;
    cin >> z;
    cout << "The 3 numbers entered are "<<x<<" "<<y<<" "<<z<<" "<<"."<<endl;
    if (x>y)
    {
        if (x>z)
        {
            cout<<x<<"is the greatest number."<<endl;
        }
        else if (x<z)
        {
            cout<<z<<"is the greatest number."<<endl;
        }
        
        
    }
    else if (x<y)
    {
        if (y>z)
        {
            cout<<y<<"is the greatest number. "<<endl;

        }
        else if (y<z)
        {
            cout<<z<<"is the greatest number. "<<endl;
        }
        
    }
    else if (x==y==z)
    {
        cout<<"All the numbers entered are equal. (ie: same numbers)"<<endl;
    }
    









    return 0;
}