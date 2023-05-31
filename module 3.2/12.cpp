// Write a program to find the max number from given two numbers using
// friend function
#include<iostream>
using namespace std;
class B;
class A
{
    int a;
    public:
    void getdata()
    {
        cout<<"Enter the number of a: ";
        cin>>a;
    }
    friend void max(A,B);
};
class B
{
    int b;
    public:
    void getdata2()
    {
        cout<<"Enter the value of b: ";
        cin>>b;
    }
    friend void max(A,B);
};
void max(A aa,B bb)
{
    if(aa.a>bb.b)
    {
    cout<<"maximun => "<<aa.a;
    }
    else
    {
        cout<<"maximum => "<<bb.b;
    }
}
int main()
{
    A aa;
    B bb;
    aa.getdata();
    bb.getdata2();
    max(aa,bb);
    return 0;
}
