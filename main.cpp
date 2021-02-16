#include <iostream>
using namespace std;

//***************************************************
// You must write the getLength, getWidth, getArea, *
// and displayData functions.                       *
//***************************************************

int main()
{
	double length,    // The rectangle's length
			   width,     // The rectangle's width
			   area;      // The rectangle's area

cout << "Enter the length:\n" << endl;
cin >> length;

cout << "Enter the width:\n" << endl;
cin >> width;

area = length * width;

cout << "-----Rectangle Data---------\n" << endl;
cout << "Length: " << length << endl;
cout << "Width: " << width << endl;
cout << "Area: " << area << endl;

 
          
}