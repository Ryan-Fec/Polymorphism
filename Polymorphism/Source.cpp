#include <iostream>
#include "Shapes.h"

void printArea(const shape& shape) {
	std::cout << shape.area() << "\n";
}

int main() {
	rectangle r1{ 3.0, 5.0 };
	square s1{ 4.0 };
	circle c1{ 10.0 };
	
	printArea(r1);
	printArea(s1);
	printArea(c1);
}