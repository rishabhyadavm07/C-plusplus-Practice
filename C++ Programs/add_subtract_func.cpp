#include<iostream>
using namespace std;

void Addition(int a, int b){
    cout<<"You have called the Addition function"<<endl;
    cout<<"Your answer is :"<<a+b<<endl;
}

void Substraction(int a, int b){
    cout<<"You have called the Substraction function"<<endl;
    cout<<"Your answer is :"<<a-b<<endl;
}

int bannerMenu(){
    
    cout<<"Choose a opration you want to perform: "<<endl;
    cout<<"1--Addition"<<endl;
    cout<<"2--Substraction"<<endl;
    int choice;
    cin>>choice;
    return choice;

}

int main(){
    int a; 
    cout<<"Enter 1st value: ";
    cin>>a;
    int b; 
    cout<<"Enter 2nd value: ";
    cin>>b;
    int choice = bannerMenu();
    if (choice == 1){
        Addition(a , b);
    } 
    else if (choice == 2){

        Substraction(a , b );
    }
    else{
        cout<<"---Some problem in given input---";

    }



    return 0;
}