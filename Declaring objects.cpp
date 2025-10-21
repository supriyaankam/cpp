/*
Create a class Student with roll number and name.
Declare two objects and display their values using a member function.
*/

#include<bits/stdc++.h>
using namespace std;
class student{
	public:
		int rollnumber;
		string name;
		void display(){
			cout << "Roll Number: " << rollnumber << endl;
			cout << "Name: " << name << endl;
		}
};
int main(){
	student s1;
	student s2;
	s1.rollnumber = 101;
	s1.name = "Supriya";
	s2.rollnumber = 102;
	s2.name = "Varsha";
	s1.display();
	s2.display();
}

