// Assume that the test results of a batch of students are stored in three different
// classes. Class Students are storing the roll number. Class Test stores the marks
// obtained in two subjects and class result contains the total marks obtained in
// the test. The class result can inherit the details of the marks obtained in the
// test and roll number of students. (Multilevel Inheritance)

#include<iostream>
using namespace std;
class student
{
    public:
    int rollnumber;
    void roll(){
        cout<<"enter your roll number => "<<endl;
        cin>>rollnumber;
    }
    void printroll(){
        cout<<"your roll number is => "<<rollnumber<<endl;
    }
};
class test:public student
{ 
    public:
    float math,sci;
    void marks(){
        cout<<"enter the marks of mathematics => "<<endl;
        cin>>math;
        cout<<"enter the marks of science => "<<endl;
        cin>>sci;
    }
    void printmarks()
	{
        cout<<"your marks in mathematics => "<<math<<endl;
        cout<<"your marks in science => "<<sci<<endl;
    }
};
class contains:public test
{
    public:
    void total()
    {
        cout<<"your total marks => "<<math+sci<<endl;
    }
};
int main()
{
    contains Contains;
    Contains.roll();
    Contains.marks();
    Contains.printroll();
    Contains.printmarks();
    Contains.total();
    return 0;
}
