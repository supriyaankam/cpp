/*
Create a class Account with private balance, protected accountNumber, and public holderName.
Show how to access each correctly.
*/
#include<bits/stdc++.h>
using namespace std;
class Account{
	private:
		double balance;
		int acc_number;
	public:
		string name;
		void setaccnumber(int number){
			acc_number = number;
		}
		long long getaccnumber(){
			return acc_number;
		}
		void setbalance(double amount){
			balance = amount;
		}
		double getbalance(){
			return balance;
		}
};
int main(){
	Account a;
	a.name = "Supriya";
	a.setaccnumber(154794261);
	a.setbalance(50000);
	cout <<"Account Number:" << a.getaccnumber() << endl;
	cout <<"Balance: " << a.getbalance() << endl;
}
