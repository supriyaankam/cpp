#include<iostream>
using namespace std;
class Product{
	private:
		double price;
		int stock;
	public:
		string productname;
		string category;
		
		//Constructor to initialize product info
		Product(string name,string cat,double p,int s){
			productname=name;
			category=cat;
			price=p;
			stock=s;
		}
		
		//Setter for price
		void setprice(double p){
			if(p>=0)
			price = p;
			else
			cout << "Invalid Price" << endl;
		}
		//Getter for price
		double getprice(){
			return price;
		}
		//Setter for stock
		void setstock(int s){
			if(s>=0)
			stock=s;
			else
			cout << "Invalid stock" << endl;
		}
		//Getter for stock
		int getstock(){
			return stock;
		}
		//Methods to display summary
		void displaysummary(){
			cout << "Product Name: " << productname << endl;
			cout << "Category: " << category << endl;
			cout << "Stock: " << stock << endl;
			cout << "Price: " << price << endl;
 		}
};

int main(){
	Product p("Fridge","Electronics",75000.00,25);
	p.displaysummary();
	p.setprice(90000.0);
	p.setstock(30);
	cout << "Updated Details:\n";
	p.displaysummary();
	return 0;
}
