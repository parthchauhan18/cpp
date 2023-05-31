// Assume a class cricketer is declared. Declare a derived class batsman from
// cricketer. Data member of batsman. Total runs, Average runs and best
// performance. Member functions input data, calculate average runs, Display
// data. (Single Inheritance)

#include<iostream>
using namespace std;
class cricketer
{ 
    protected:
        string name; 
        public:
        void cricketername(string name1)
		{ 
            name=name1;
            cout<<"Name is => "<<name1<<endl; 
        }
};
class batsman: public cricketer
{
    int totalruns,bestperformance;
    float averageruns;
    public:
    void information(int total, float average,int bestperformance1)
	{ 
        totalruns=total;
        bestperformance=bestperformance1;
        averageruns=average;
    }
    void printinformation()
	{ 
        cout<<"total runs => "<<totalruns<<endl;
        cout<<"everage runs => "<<averageruns<<endl;
        cout<<"best performance => "<<bestperformance<<endl;
    }

};
int main()
{
    batsman Batsman; 
    Batsman.cricketername("virat kohli"); 
    Batsman.information(17266,50.6,224);
    Batsman.printinformation();
    return 0;
}
