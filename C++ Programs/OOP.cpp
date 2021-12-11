#include<iostream>
#include<string>
using namespace std;
class Cars
{
private:
    //member variables
    string company_name;
    string model_name;
    string fuel_type;
    float milage;
    double price;
public:
//member function
void setdata(string cname,string mname, string ftype, float m, double p){
    company_name = cname;
    model_name = mname;
    fuel_type = ftype;
    milage = m;
    price = p;
}
void displaydata(){
    cout<<"These are the car properties:"<<endl;
    cout<<"comapny name -"<<company_name<<endl;
    cout<<model name -<<model_name<<endl;
    cout<<"fuel type -"<<fuel_type<<endl;
    cout<<"milage -"<<milage<<endl;
    cout<<"price -"<<price<<endl;
    cout<<"ends"<<endl;

}
int main(){
    
    
    return 0;
}
