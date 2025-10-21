/*
Create a class Rectangle with length and breadth.
Define member functions to calculate area and perimeter.
*/

#include<bits/stdc++.h>
using namespace std;
class Rectangle{
	public:
		int length;
		int breadth;
		void area(){
			cout << "Area: " << length * breadth << endl;
		}
		void perimeter(){
			cout <<"Perimeter: " << 2 * (length + breadth) << endl;
		}

};
int main(){
	Rectangle R1;
	R1.length = 50;
	R1.breadth = 100;
	R1.area();
	R1.perimeter();
}
