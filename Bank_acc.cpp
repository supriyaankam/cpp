#include<iostream>
using namespace std;
class Account{
	private:
		double balance;
		int acc_number;
	public:
		string holdername;
		
		//Constructor to initialize account details
		Account(string name,double bal,int num){
			holdername=name;
			balance=bal;
			acc_number=num;
		}
		//Method to deposit
		void deposit(double amount){
			if(amount>0){
				balance+=amount;
				cout << "Deposited amount: " << amount << endl;
			}
			else{
				cout << "Invalid depository\n" << endl;
			}
		}
		//Method to withdraw
		void withdraw(double amount){
			if(amount>0 && amount<=balance){
				balance-=amount;
				cout << "Withdrawn amount: " << amount << endl;
			}
			else{
				cout << "Invalid amount" << endl;
			}
		}
		//Method to checkbalance
		void checkbalance(){
			cout << "Current balance:" << balance <<endl;
		}
};
int main(){
	Account a1("Supriya",75000.00,654809);
	cout << "Account Holder: " << a1.holdername << endl;
	a1.checkbalance();
	a1.deposit(1000);
	a1.withdraw(1500);
	a1.checkbalance();
	return 0;
}
