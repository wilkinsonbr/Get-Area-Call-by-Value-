// ConsoleApplication1.cpp : Defines the entry point for the console application.
// Call By Value 

#include "stdafx.h"
#include <iostream>
using namespace std;
const float pi = 3.14159;

float getArea(int radius);
float getCircum(int radius); 

int main()
{
	int radius = 1;
	float area=0;
	float circum=0;

	while (radius != 0) {

		cout << "What is the radius of the circle?" << endl;
		cin >> radius;

		area = getArea(radius);
		if (area != 0) {
			cout << "The area of the circle is " << area << endl;
		}
		
		circum = getCircum(radius);
		if (area != 0) {
			cout << "The circumfrance of the circle is " << circum << endl;
		}
	}

    return 0;
}

float getArea(int radius) {
	float area;
	area = pi * pow(radius,2);

	return area;

}

float getCircum(int radius) {
	float circum;
	circum = 2 * pi*radius;

	return circum;

}

