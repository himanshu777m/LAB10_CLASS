#include<iostream>
using namespace std;

class rectangle{
	//public data member
	public:
	double b; 	//for breadth
	double l; 	//for klength
	
	
	//class member function
	// stored data in private data member by using function
	void getdata()
	{
		cout << "Enter Length of Rectangle: ";
		cin >> l;
		cout << "Enter breadth of Rectangle: ";
		cin >> b;
	}
	
	//funtion for area
	void area(){
		cout << "Area of Rectangle is " << l*b <<endl;
	}
	
	//function for Perimeter
	void perimeter(){
		cout << "Perimeter of Rectangle is " << 2*(l+b) << endl;
	}
	
};

int main(){
	//declare objects
	rectangle rect1, rect2;
	
	//accessing the class member
	cout <<"Enter data for first rectangle\n";
	rect1.getdata();
	rect1.area();
	rect1.perimeter();
	
	cout << endl;
	cout << "Enter data for Secound Rectangle\n";
	rect2.getdata();
	rect2.area();
	rect2.perimeter();
	
	//compare the area and perimeter
	cout << endl;
	
	if((rect1.l)*(rect1.b) > (rect2.l)*(rect2.b) ){
		cout << "Area of Rectangle 1 is More\n";
	}
	else if((rect1.l)*(rect1.b) < (rect2.l)*(rect2.b) ){
		cout << "Area of Rectangle 2 is More\n";
	}
	else{
		cout << "Area of Both Rectangle is Equal\n";
	}
	
	if( ((rect1.l)+(rect1.b)) > ((rect2.l)+(rect2.b)) ){
		cout << "Perimeter of Rectangle 1 is More\n";
	}
	else if( ((rect1.l)+(rect1.b)) < ((rect2.l)+(rect2.b)) ){
		cout << "Perimeter of Rectangle 2 is More\n";
	}
	else{
		cout << "Perimeter of Both Rectangle is Equal\n";
	}
	return 0; 
}