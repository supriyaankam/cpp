//Program to illustrate inline functions and function overloading. 
#include<iostream>
using namespace std;
inline int square(int x){
	return x * x;
}
int add(int a, int b){
	return a + b;
}
double add(double a, double b){
	return a + b;
}
int add(int a, int b, int c){
	return a + b + c;
}
int main(){
	cout << "Square of 5 = " << square(5) << endl;
	cout << "Square of 9 = " << square(9) << endl;
	cout << "Addition of 2 and 3: " << add(3,4) << endl;
	cout << "Addition of 1,2 and 3: " << add(1,2,3) << endl;
	cout << "Addition of 2.5 and 4.5: " << add(2.5,4.5) << endl;
	return 0;
}
