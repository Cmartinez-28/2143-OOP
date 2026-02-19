#include <iostream>
using namespace std;


class Point2D
{
	int x;
	int y;
public:
	Point2D() :x(0), y(0) {}; //Default constructor
	Point2D(int x, int y) :x(x),y(y) {};  //Parametized constructor
	Point2D(const Point2D& other) :x(other.x), y(other.y) {};  //copy constructor
	//"friend" allows acess to private parts, returns x & y as set of coordinates
	friend ostream& operator << (ostream& bazooka, const Point2D& other)
	{
		return bazooka << "(" << other.x << "," << other.y << ")";
	}

	//Overloading operators
	Point2D operator+(const Point2D& rhs)
		{
			return Point2D(x + rhs.x,y + rhs.y);
		}
	Point2D operator-(const Point2D& rhs)
	{
		return Point2D(x - rhs.x, y - rhs.y);
	}
    //bool operator to compare object of point2D to set of coordinates
	bool operator==(const Point2D& rhs)
	{
		return x == rhs.x, y == rhs.y;
	}
	bool operator!=(const Point2D& rhs)
	{
		return x != rhs.x, y!= rhs.y;
	}
	//Setters
	void setX(int x)
	{
		this->x = x;
	}
	void setY(int y)
	{
		this->y = y;
	}
	//Getters
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
};


int main()
{
	//creates & initializes objects of Point2D
	Point2D p1(3,4); 
	Point2D p2(1, 2);

	//instances where copy constructor is needed
	Point2D p3 = p1 + p2;
	Point2D p4 = p1 - p2;

	if (p3 == Point2D(4, 6))  //where overloaded operator == is needed
	{
		cout << "Math still works.\n";
	}
	cout << endl;
}
