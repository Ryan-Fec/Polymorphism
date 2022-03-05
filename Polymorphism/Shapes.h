#pragma once
#include <iostream>

class rectangle {
public:
	rectangle(double width, double height);
	const double width;
	const double height;
	double area() const;
};

class square {
public:
	square(double side);
	const double side;
	double area() const;
};

class circle {
public:
	circle(double radius);
	const double radius;
	double area() const;
};