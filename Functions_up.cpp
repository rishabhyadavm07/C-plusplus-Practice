#include<iostream>
using namespace std;
int max(int x, int y){
if (x>y)
{
    return x;
}
else{
    return y;
}
}
int main(){

    int a,b;
    cout<<"Enter the numbers you want to compare: "<<endl;
    cin>>a>>b;
    int c = max(a,b);
    cout<<c<<" is the greatest in both of the inputs."<<endl;

    return 0;
}
