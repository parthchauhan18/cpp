// Write a program to find the multiplication values and the cubic values using (inline function)

#include<iostream>
using namespace std;
inline int multiplication(int a, int b)
{
    return a*b;
}
inline int cube(int a)
{
    return a*a*a;
}
int main()
{
    float num1,num2;
    cout<<"enter the frist number => "<<endl;
    cin>>num1;
    cout<<"enter the second number => "<<endl;
    cin>>num2;

    cout<<"The product of the frist and second number is => "<<multiplication(num1,num2)<<endl;
    cout<<"cube of the frist number is => "<<cube(num1)<<endl;
    cout<<"cube of the second number is => "<<cube(num2)<<endl;

    
    return 0;
}
