//Program illustrating Copy Constructor.
#include<iostream>
using namespace std;
class student{
	private:
		string name;
		int age;
	public:
		student(string n,int a){
			name = n;
			age = a;
			cout << "Parameterized constructor called " << endl;
		}
		student(const student &s){
			name = s.name;
			age = s.age;
			cout << "Copy constructor called " << endl;
		}
		void display(){
			cout << "Name: " << name << ",Age: " << age << endl;
		}
};
int main(){
	student s1("Supriya",20);
	s1.display();
	student s2(s1);
	s2.display();
	return 0;
}
