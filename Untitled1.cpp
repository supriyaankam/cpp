#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n;
		int sum=0;
		while(n!=0){
			x=n%10;
			sum+=x;
			n=n/10;
		}
		cout << sum << "\n";
	}
	return 0;
}
