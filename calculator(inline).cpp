/*
Create a class Calculator with inline functions for add, subtract, and multiply two integers.
*/
#include<bits/stdc++.h>
using namespace std;
class Calculator{
	public:
		inline void Add(int x,int y){
		cout << "Addition: " << x + y << endl;
	}
	inline void Diff(int x, int y){
		cout << "Difference: " << x - y << endl;
	}
	inline Product(int x , int y){
		cout << "Product: " << x * y << endl;
	}	
};
int main(){
	Calculator c;
	c.Add(10,20);
	c.Diff(50,10);
	c.Product(20,5);
	
}
