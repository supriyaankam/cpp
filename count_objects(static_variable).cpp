/*
Create a class Employee to count how many objects are created using a static variable.
*/
#include<bits/stdc++.h>
using namespace std;
class Employee{
	public:
	static int total_variables;	
	int e_id;
	string name;
	Employee(){
		total_variables++;
	}
};
int Employee::total_variables = 0;
int main(){
	Employee E1;
	Employee E2;
	Employee E3;
	cout << "Total Employess created: " << Employee::total_variables << endl;
	
}
