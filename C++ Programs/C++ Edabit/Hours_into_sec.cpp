#include<iostream>
using namespace std;
int main(){
    cout<<"Program Start"<<endl;
    int hour,sec;
    cout<<"Enter the nummber of hours to convert: "<<endl;
    cin>>hour;
    sec=hour*3600;
    cout<<"the number of seconds in "<<hour<<"hours is "<<sec<<endl;

    
    cout<<"Program End"<<endl;
    return 0;
}