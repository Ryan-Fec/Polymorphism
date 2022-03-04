#pragma once
#include <iostream>

class shape {};

class rectangle : public shape {
public:
	rectangle(double width, double height);
	double width;
	double height;
};

class square : public shape {
public:
	square(double size);
	double size;
};

class circle : public shape {
public:
	circle(double radius);
	double radius;
};