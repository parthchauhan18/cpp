// Write a program to Mathematic operation like Addition, Subtraction,
// Multiplication, Division Of two number using different parameters and
// Function Overloading
#include<iostream>
using namespace std; 
double operation(double a,double b)
{ 
    return a+b;
}
double operation(double a,double b,double c)
{ 
    return a-b-c;
}
double operation(double a,double b,double c, double d ,double e)
{ 
    return (a*b)*(c*d)*e;
}
double operation(double a,double b, double c, double d)
{ 
    return (a*b)/(c*d);
}
int main()
{
    cout<<"addition => "<<operation(30,20)<<endl; 
    cout<<"sunstraction => "<<operation(100,50,20)<<endl;
    cout<<"multiplication => "<<operation(10,10,10,10,10)<<endl;
    cout<<"division => "<<operation(10,5,10,2)<<endl;
    return 0;
}
