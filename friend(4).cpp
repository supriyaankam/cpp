//Program to illustrate friend function.
#include<iostream>
using namespace std;
class Box{
	private:
		int length;
	public:
		Box(int l){
			length = l;
		}
		friend void showlength(Box b);
};
void showlength(Box b){
	cout << "Length of the box = " << b.length << endl;
}
int main(){
	Box b1(25);
	showlength(b1);
	return 0;
}
