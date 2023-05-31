// w.a.p to make simple calculator using class
#include<iostream>
using namespace std;
class calculator
{
    public:
    int addition(int a,int b)
	{
        return a+b;
    }
    int substraction(int a,int b)
	{ 
        return a-b;
    }
    int multiplication(int a, int b)
	{
        return a*b;
    }
    int division(int a,int b)
	{ 
        return a/b;
    }
};
int main()
{
    double num1,num2,total;  
    char operation;
    cout<<"enter the frist number => "<<endl;  
    cin>>num1;
    cout<<"enter the second number => "<<endl;
    cin>>num2;
    operation:
    cout<<"Enter the operation (+,-,/,*)"<<endl;
    cin>>operation;
    calculator calculator2; 
    switch(operation) 
    {
        case '+':
        total=calculator2.addition(num1,num2);
        cout<<"total is => "<<total;
        break;
        case '-':
        total=calculator2.substraction(num1,num2); 
        cout<<"total is => "<<total;
        break;
        case '*':
        total=calculator2.multiplication(num1,num2); 
        cout<<"total is => "<<total;
        break;
        case '/':
        total=calculator2.division(num1,num2);
        break;
        default:
        cout<<"please enter valid operation"<<endl;
        goto operation; 
    }

    return 0;
}
