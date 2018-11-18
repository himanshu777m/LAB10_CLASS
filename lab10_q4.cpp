#include <iostream>
using namespace std; 
 
// ********************************************************************
//  Declaration of class Point
 // ******************************************************************** 
 // class Point represents a two-dimensional point 
 class Point {
 	public:  
  	// default class constructor (with no arguments):   
  	Point();  
   	// class constructor that sets the coordinates x, y to the values xval, yval:  
    Point(int xval, int yval); 
   	// member function for moving a point by dx, dy:   
   	void Move(int dx, int dy); 
   	// member functions for getting values of x, y:   
   	int Get_X() const;   
   	int Get_Y() const; 
	// member functions for setting x, y to xval, yval respectively    
   	void Set_X(int xval);   
  	void Set_Y(int yval); 
	 //Lab 7 exercise 4.1. Add declaration of member function Print here: 
 	void Print();
 	// private data members x, y represent coordinates of the point: 
 	private:   
 	int X;   int Y; 
 };  
 
 
// ******************************************************************** 
//  Methods for class Point
 // ******************************************************************** 
 // class constructor sets X, Y to zero when no values are specified: 
 Point::Point() { 
  X = 0;   Y = 0; 
  } 
 // class constructor sets X, Y to given values xval, yval: 
 Point::Point(int xval, int yval) {  
  X = xval;   Y = yval; 
  } 
 // member function Move: increases the x coordinate by dx and the y coordinate by dy. 
  void Point::Move(int dx, int dy) {  
   X += dx;   Y += dy;
    } 
 // Get_X returns the value of the X coordinate
  int Point::Get_X() const {  
   return X; 
   } 
 // Get_Y returns the value of the Y coordinate
  int Point::Get_Y() const {  
   return Y; 
   } 
 // Set_X sets the value of X coordinate to xval 
 void Point::Set_X(int xval) {   
 X = xval; 
 }  
 // Set_Y sets the value of Y coordinate to yval 
 void Point::Set_Y(int yval) { 
  Y = yval;
  }    
 //Lab 7 exercise 4.1. Add definition of member function print: 
 void Point::Print(){
 	cout << "( " << Get_X() << ", " << Get_Y() << " )\n"; 
	}
 
 
// ******************************************************************** 
//  Declaration of class Rectangle 
class Rectangle{
	private:
    //define Points in private
    Point P1, P2, P3, P4;
	//member functions side1, side2 
   	int Side_1();
    int Side_2();
	
	public:
    // default class constructor (no argu..):
    Rectangle();
    // class constructor
    Rectangle(Point PA,Point PB);
	
	//Print function for Rectangle clsss
    void RPrint();
    //member function to find the area of the rectangle. 
    void RArea();
 
};


//  Methods for class Rectangle
//Lab 7 exercise 4.2, 4.3. Add class Rectangle methods HERE: 
// class constructor sets A,B,C and D to (0,0), (1,0), (0,1), (1,1) when no values are specified:

Rectangle::Rectangle()
{
  P1.Set_X(0) ;
  P2.Set_X(0) ;
  P3.Set_X(1) ;
  P4.Set_X(1) ;
  P1.Set_Y(0) ;
  P2.Set_Y(0) ;
  P3.Set_Y(1) ;
  P4.Set_Y(1) ;

//give value to Constructor
Rectangle::Rectangle(Point PA,Point PB)
{
    P1=PA;
    P2=PB;
    P3.Set_X(P1.Get_X()) ;
    P3.Set_Y(P2.Get_Y()) ;
    P4.Set_X(P2.Get_X()) ;
    P4.Set_Y(P1.Get_Y()) ;
}

//Print Points
void Rectangle::RPrint(){
    cout<<"For the rectangle PQRS"<<endl;
    cout<<"Point P is";
		P1.print();
    cout<<"Point Q is";
		P2.print();
    cout<<"Point R is";
		P3.print();
    cout<<"Point S is";
		P4.print();
}

int Rectangle::Side_1()
{
    return P2.Get_X()-P1.Get_X();
}
int Rectangle::Side_2()
{
    return P2.Get_Y()-P1.Get_Y();
}
void Rectangle::RArea()
{
    void Area(){
    cout<<"The Area of the Rectangle is "<< Side_1()*Side_2() <<endl;
}
}; 
 
// ************************************************************** 
//  main() function for testing classes Point and Rectangle 
// ***************************************************************

 // Testing classes Point and Rectangle 
int main() { 
// Declaring a point using default class constructor (x = y = 0):   
Point p1;   
cout<< "The x value for p1 is " << p1.Get_X() << endl;  
cout<< "The y value for p1 is " << p1.Get_Y() << endl; 
 // Declaring a point with coordinates X = 2, Y = 3:   
Point p2(2, 3);   
cout<< "The x value for p2 is " << p2.Get_X() << endl;  
cout<< "The y value for p2 is " << p2.Get_Y() << endl; 
// Moving point p2 by (1, -1):   
p2.Move(1, -1);   
cout<< "After the move:" << endl;  
 cout<< "The x value for p2 is " << p2.Get_X() << endl;   
 cout<< "The y value for p2 is " << p2.Get_Y() << endl; 
  //Lab 7 exercise 4.1. Test member function print on points p1, p2: 
  cout<<"The point p1 is ";p1.print( p1.Get_X(), p1.Get_Y());
  cout<<"The point p2 is ";p2.print( p2.Get_X(), p2.Get_Y());
 //Lab 7 Exercises 4.2, 4.3. Testing of the class Rectangle goes here: 
 Rectangle R1;
  R1.RPrint();
  R1.Side_1();
  R1.Side_2();
  R1.RArea();
  
  //Points
  Point Pa(3,2);
  Point Pb(6,9);
  
  Rectangle R2(Pa, Pb);
  R2.RPrint();
  R2.Side_1();
  R2.Side_2();
  R2.RArea();
   
 return 0; 
}