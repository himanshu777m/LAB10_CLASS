// find volume of box(cube) using class and objects

#include<iostream>
using namespace std;

// declare class
class box
{
	public:
	//declare class data member
	double l;		//for length
	double h;	//for height
	double b;	//for breadth
	
	//declare class memeber function
	
	//function for input
	void getdata(){
		cout << "Enter the length "<<endl;
		cin >> l;
		cout << "Enter the height "<<endl;
		cin >> h;
		cout << "Enter the breadth  "<<endl;
		cin >> b;
	}
	
	//function for output
	void volume(){
		cout << "Volume of Box is " << l*h*b << endl; 
	}
	
} box1, box2;

int main(){
	//acxessing class memeber
	cout << "Enter Data of Box1" <<endl;
	box1.getdata();
	box1.volume();
	
	cout << endl;
	cout << "Enter Data of Box2" <<endl;
	box2.getdata();
	box2.volume();
	
	return 0;
}  