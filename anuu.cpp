#include<iostream>
#include<string>
using namespace std;
class bankemployee 
{
private:
    string name;
    int accountno;
    double balance;
public:
    bankemployee(string empname,int accno,double initialbalance)
{
    name=empname;
    accountno=accno;
    balance=initialbalance;
}
 
void printdetails()
{
     cout<<"Emlopyee Name:"<<name<<endl;
     cout<<"Account Number:"<<accountno<<endl;
     cout<<"Balance:"<<balance<<endl;
}
void withdraw(double amount)
{
     if(amount>balance)
{
      cout<<"Invalid balance in sufficient funds"<<endl;}
    else {
     balance-=amount;
       cout<<"withdrawl successful New balance:"<<balance<<endl;
}
}
void deposit(double amount)
{
  balance+=amount;
  cout<<"Deposit Succesful. New balance"<<balance<<endl;
}
};
int main(){
	string employeename;
	int accountno;
	double initialbalance;
	cout<<"Enter employee name:";
	getline(cin,employeename);
	cout<<"Enter account number:";
	cin>>accountno;
	cout<<"Enter initial Balance:";
        cin>>initialbalance;
	bankemployee employee(string employeename,int accountno,double initialbalance)
        employee.printdetails();
	double withdrawamount,depositamount;
	cout<<"enter amount to withdraw";
	cin>>withdrawamount;
	employeename.withdrawamount(withdrawamount)
	cout<<"enter amount to deposit:";
	cin>>depositamount;
	employeename.depositamount(depositamount);
	return 0;
}

