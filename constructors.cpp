//Program to illustrate the use of Constructors and Destructors.
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
			cout << "Constructor called for " << name << endl;
		}
		void display(){
			cout << "Name: " << name << ",Age: " << age << endl;
		}
		~student(){
			cout << "Destructor called for " << name << endl;
		}
};
int main(){
	student s1("Supriya",19);
	s1.display();
	{
		student s2("Varsha",18);
		s2.display();
	}
	return 0;
}
