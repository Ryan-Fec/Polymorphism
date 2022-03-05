#include "Shapes.h"
#include <iostream>

rectangle::rectangle(const double width, const double height):
	width{ width }, height{ height } {};

square::square(const double side):
	side{ side } {};

circle::circle(const double radius) :
	radius{ radius } {};

double rectangle::area() const {
	return width * height;
}

double square::area() const {
	return side * side;
}

double circle::area() const {
	return radius * 3.14;
}