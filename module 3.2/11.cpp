// Write a program to swap the two numbers using friend function without
// using third variable
#include<iostream>
using namespace std;
class swapping
{
    int a,b;
    friend void swap(swapping);
};
void swap(swapping s)
{
    cout<<"Enter the number A => ";
    cin>>s.a;
    cout<<"Enter the number B => ";
    cin>>s.b;
    cout<<"Before swapping A= => "<<s.a<<endl;
    cout<<"Before swapping B= => "<<s.b<<endl;
    cout<<"After swapping A => "<<s.a*s.b/s.a<<endl;
    cout<<"After swapping B => "<<s.a*s.b/s.b<<endl;


}
int main()
{
    swapping Swapping;
    swap(Swapping);
    return 0;
}
