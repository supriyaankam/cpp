//Program illustrating Constructor overloading.
#include<iostream>
using namespace std;
class student{
	private:
		string name;
		int age;
	public:
		student(){
			name = "Unknown";
			age = 0;
			cout << "Default constructor called " << endl;
		}
		student(string n,int a){
			name=n;
			age=a;
			cout << "Parameterized constructor called " << endl;
		}
		student(string n){
			name = n;
			age=-1;
			cout << "Single parameter constructor called " << endl;
		}
		void display(){
			cout << "Name: " << name << ",Age: " << age << endl;
		}
};
int main(){
	student s1;
	s1.display();
	student s2("Supriya",19);
	s2.display();
	student s3("Varsha");
	s3.display();
	return 0;
}
