#include<iostream>
#include<string>
using namespace std;
void change(string data){
    data = "hardcoded";
    cout<<data<<"function called"<<endl;

};
int main(){
    string data="rishabh";
    change(data);
    // int a = change(data);
    cout<<data<<endl<<"reporting from main function"<<endl<<endl;
}