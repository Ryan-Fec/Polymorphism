#include "Shapes.h"
#include <iostream>

rectangle::rectangle(double width, double height):
	width{ width }, height{ height } {};

square::square(double size):
	size{ size } {};

circle::circle(double radius) :
	radius{ radius } {};
