#include<iostream>
using namespace std;
int main(){
    cout << "start of program" << endl;
    int check_number ;
    cout << "enter the number you want to check : " << endl;
    cin >> check_number;
    if (check_number % 2 == 0){
        cout << "it is a even number !!" << endl;
    }
    else if (check_number % 2 != 0)
    {
        cout << "its a odd number !!"<<endl;
    }
    cout << "program closing " << endl;


    return 0;
}