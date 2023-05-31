// Write a program to concatenate the two strings using Operator Overloading
#include<iostream>
using namespace std;
class concatenate 
{
    private:
    string a,b,c; 
    public:
    void inputdata()
    {
        cout<<"Enter your Frist name=> ";
        cin>>a;
        cout<<"Enter your Last name => ";
        cin>>b;
    }
    void print();
    void operator+();
};
void concatenate::operator+()
{
    c=a+b;
}
void concatenate::print()
{
    cout<<"your full name is => "<<c<<endl;
}

int main()
{
    concatenate Concatenate;
    Concatenate.inputdata();
    +Concatenate;
    Concatenate.print(); 
    
    return 0;
}
