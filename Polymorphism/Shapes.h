#pragma once
#include <iostream>

class shape {
public:
	virtual double area() const = 0;
};

class rectangle : public shape {
public:
	rectangle(double width, double height);
	const double width;
	const double height;
	double area() const override;
};

class square : public shape {
public:
	square(double side);
	const double side;
	double area() const override;
};

class circle : public shape {
public:
	circle(double radius);
	const double radius;
	double area() const override;
};