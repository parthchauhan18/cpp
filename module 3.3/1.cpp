// Write a program of to swap the two values using template
#include<iostream>
using namespace std;
template <class m>
int swapping(m *a,m *b)
{
    m temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=10,b=20;
    cout<<"before swapping the value of a is => "<<a<<endl;
    cout<<"before swapping the value of b is => "<<b<<endl;
    swapping(&a,&b);
    cout<<"After swapping the value of a is => "<<a<<endl;
    cout<<"After swapping the value of b is => "<<b<<endl;

    return 0;
}
