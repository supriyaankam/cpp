#include<bits/stdc++.h>
using namespace std;

template<typename T>

T factorial(T n){
	if(n == 0 || n == 1){
		return 1;
	}
	return n*factorial(n-1);
}
int main(){
	int num;
	cin >> num;
	int result = factorial(num);
	cout << factorial(num) << endl;
	
}
