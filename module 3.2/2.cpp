// W.A.P TO define class to represent a bank account .
#include<iostream>
using namespace std;
class bankdetails{
    string accountholdername,accounttype;
    int accountnumber;
    double accountbalance;
    public:
    void value(string name,string type,int number,double balance){
        accountholdername=name;
        accounttype=type;
        accountnumber=number;
        accountbalance=balance;
    }
    void deposite(double amount){
        accountbalance+=amount;
    }
    void withraw(double amount){
        cout<<"withraw amout => "<<amount<<endl;
        if(amount<=accountbalance){
            accountbalance-=amount;
            cout<<"-----withraw done-----"<<endl;
        }
        else{
            cout<<"invalid amount"<<endl;
        }
    }
    void printinformation(){
        cout<<"account holder name => "<<accountholdername<<endl;
        cout<<"account type => "<<accounttype<<endl;
        cout<<"account number => "<<accountnumber<<endl;
        cout<<"current balance => "<<accountbalance<<endl;
    }


    
};
int main()
{
    bankdetails Bank;
    Bank.value("parth chauhan","saving",121818203,20000);
    Bank.deposite(4000);
    Bank.withraw(13000);
    Bank.printinformation();
    return 0;
}
