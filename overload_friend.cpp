//Overload Unary and Binary Operators using friend function.
#include<iostream>
using namespace std;
class number{
	private:
		int value;
	public:
		number(int v=0){
			value=v;
		}
		friend number operator++(number &n);
		friend number operator+(number n1,number n2);
		void display(){
			cout << "Value: " << value << endl;
		}
};
number operator++(number &n){
	n.value++;
	return n;
}
number operator+(number n1,number n2){
	return number(n1.value+n2.value);
}
int main(){
	number n1(5),n2(10),n3;
	cout << "Before Unary Operation: " << endl;
	n1.display();
	++n1;
	cout << "After Unary Operation(++n1): " <<endl;
	n1.display();
	n3=n1+n2;
	cout << "After Binary Operation(n1+n2): " << endl;
	n3.display();
	return 0;
}
