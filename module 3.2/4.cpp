// Write a program of Addition, Subtraction, Division, Multiplication using(constructor)

#include<iostream>
using namespace std;
class calculator{ 
    int num1,num2; 
    public:
    calculator(int n1,int n2)
	{
        num1=n2; 
        num2=n2;
    }
    int addition()
	{ 
        return num1+num2;
    }
    int substraction()
	{ 
        return num1-num2;
    }
    int multiplication()
	{ 
        return num1*num2;
    }
    int division()
	{ 
        return num1/num2;
    }
};
int main()
{
    int num1,num2;
    cout<<"enter the frist number => "<<endl;
    cin>>num1;
    cout<<"enter the second number => "<<endl;
    cin>>num2;
    calculator calculator2(num1,num2);  
    cout<<"addition of the number is => "<<calculator2.addition()<<endl; 
    cout<<"substraction of the number is => "<<calculator2.substraction()<<endl;
    cout<<"multiplication of the number is => "<<calculator2.multiplication()<<endl;
    cout<<"division of the number is => "<<calculator2.division()<<endl;
    return 0;
}
