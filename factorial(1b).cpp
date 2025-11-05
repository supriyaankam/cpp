#include<iostream>
using namespace std;
long factorial(int n){
	if(n == 0 || n == 1){
		return 1;
	}
	else{
		return n * factorial(n-1);
	}
}
int main(){
	int num;
	cin >> num;
	if(num < 0){
		cout << "Factorial is not defined for negative numbers." << endl;
	}
	else{
		long result = factorial(num);
		cout << "Factorial of " << num << " = " << result << endl;
	}
	return 0;
}
