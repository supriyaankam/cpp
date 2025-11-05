#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float a,b,c;
	cout << "Enter coefficients os a, b and c: ";
	cin >> a >> b >> c;
	float d = b * b - 4 * a * c;
	float r1,r2;
	if(a == 0){
		cout << "This is not a quadratic equation." << endl;
	}
	else if(d > 0){
		r1 = (-b+sqrt(d))/(2*a);
		r2 = (-b-sqrt(d))/(2*a);
		cout << "Roots are real and distinct." << endl;
		cout << "Root1 = " << r1 << endl;
		cout << "Root2 = " << r2 << endl;
	}
	else if(d == 0){
		r1=r2=-b/(2*a);
		cout << "Roots are real and equal" << endl;
		cout << "Root = " << r1 << endl;
	}
	else{
		float realpart = -b/(2*a);
		float imagpart = sqrt(-d)/(2*a);
		cout << "Roots are complex and imaginary" << endl;
		cout << "Root1 = " << realpart << "+" << imagpart << "i" << endl;
		cout << "Root2 = " << realpart << "-" << imagpart << "i" << endl;
	}
	return 0;
}
