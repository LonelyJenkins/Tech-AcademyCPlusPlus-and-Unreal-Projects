// Class Challenge Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Shape {
public:
	string color;

	void getArea()
	{
		cout << "The area of this shape is...";
	}
};

class Rectangle : public Shape
{
public:
	int height;
	int width;
	void getArea()
	{
		cout << "The area of this " + color + " rectangle is..." << height * width;
	}
};

class Triangle : public Shape
{
public:
	int base;
	int height;
	void getArea()
	{
		cout << "The area of this " + color + " triangle is..." << (base/2) * height;
	}
};

class Circle : public Shape
{
public:
	int radius;
	void getArea()
	{
		cout << "The area of this " + color + " circle is..." << 3.14 * (radius*radius) ;
	}
};

int main()
{
	Rectangle rectangle;
	rectangle.color = "pink";
	rectangle.height = 10;
	rectangle.width = 50;
	rectangle.getArea();

	Triangle triangle;
	triangle.color = "orange";
	triangle.base = 11;
	triangle.height = 15;
	triangle.getArea();

	Circle circle;
	circle.color = "brown";
	circle.radius = 19;
	circle.getArea();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
