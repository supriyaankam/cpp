//Overload Unary and Binary Operators using member function.
#include<iostream>
using namespace std;
class number{
	private:
		int value;
	public:
		number(int v = 0){
			value = v;
		}
		void operator++(){
			++value;
		}
		number operator+(number obj){
			number temp;
			temp.value=value+obj.value;
			return temp;
		}
		void display(){
			cout << "Value: " << value << endl;
		}
};
int main(){
	number n1(5),n2(10),n3;
	cout << "Before Unary Operation: " << endl;
	n1.display();
	++n1;
	cout << "After Unary operation(++n1): " << endl;
	n1.display();
	n3=n1+n2;
	cout << "After Binary Operation(n1+n2): " << endl;
	n3.display();
	return 0;
}
