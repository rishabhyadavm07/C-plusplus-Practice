#include<iostream>
#include<fstream>
using namespace std;
int main(){

    char arr[100];
    char arr1[100];
    cout<<"Enter your name and DOB: "<<endl;
    cin.getline(arr,100);
    ofstream myfile("lol.txt",ios::app);//file making and using append 
    myfile<<arr;
    myfile.close();
    cout<<"Opration completed Sucessfully!"<<endl;

    ifstream obj("lol.txt");//file reading started
    obj.getline(arr1,100);
    cout<<"Output: "<<arr1<<endl;
    obj.close();
    return 0;
}