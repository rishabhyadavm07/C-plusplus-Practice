#include<iostream>
using namespace std;

int main() {
    
    int option;
    cout<<"choose the oprations to perform from the list below :"<<endl<<"1. Add"<<endl << "2. Substract" << endl << "3. Multiplication" << endl;
    
    cin >> option;
    
    cout << "you chose " << option << endl;

    switch (option)
    {
    case 1:
    int x, y ;
    cout << "Enter 1st Number: " << endl ;
    cin >> x ;
    cout << "Enter 2nd Number" << endl ;
    cin >> y ;
    cout << "If we add "<<x<<"and"<<y<<"we get "<<(x+y);
        break;
    case 2:
    int a, b ;
    cout << "Enter 1st Number: " << endl ;
    cin >> a ;
    cout << "Enter 2nd Number" << endl ;
    cin >> b ;
    cout << "If we Substract "<<a<<"and"<<b<<"we get "<<(a-b);
        break;
    case 3:
    int c, d  ;
    cout << "Enter 1st Number: " << endl ;
    cin >> c ;
    cout << "Enter 2nd Number" << endl ;
    cin >> d ;
    cout << "If we Multiply "<<c<<" and "<<d<<" we get "<<(c*d);
        break;
    
    
    default:
        break;
    }


    cin.ignore();
    return 0;
}
