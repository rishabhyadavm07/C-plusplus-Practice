#include<iostream>
using namespace std;
class employee{
    public:
    employee(){
        cout<<"Constructer invoked !"<<endl;

    }
    ~employee(){
        cout<<"Destructer invoked !"<<endl;

    }
};
int main(){
    employee e1;
    employee e2;


    return 0;
}