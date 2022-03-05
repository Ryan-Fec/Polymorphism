#include <iostream>
#include "Shapes.h"

template<typename T>
void printArea(const T& shape) {
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

// I find Static Polymorphism is easier to implement and use. I believe this due to the lack of a need to mess with the class definitions, which can get difficult to follow at a point.

// I think that the reason static polymorphism is encouraged is that it feels a little more free. The template class can be any class whatsoever, while including a specific parent class
// can put a limit on what is usable with the defined function. 