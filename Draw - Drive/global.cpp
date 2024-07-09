#include "global.h"

//madisont, adilf, armaanm - prog71020, lab 04 - global functions implementation

//REQUIREMENTS
/*Design, implement and test a global draw function that can draw any of your shapes
and vehicles.
Design, implement and test a global drive function that can drive any of your vehicles.
	a. For simplicity driving a BMW can be represented by printing:
	“Driving a BMW”.
Design, implement and test a global function called getTotalArea. This function
accepts an array as an input argument. The array elements can be pointed to
Rectangle or Circle. The function returns the total area of all the shapes passed to it!
a. Test this function by creating four shapes (two Rectangles and two Circles) that
have different areas.*/

void globaldraw(SHAPE& obj) {
    obj.draw();
}

// function overloading for a global drive function
void globaldrive(BMW& car) {
    car.drive();
}

void globaldrive(MAZDA& car) {
    car.drive();
}

double globalarea(SHAPE* shapes[], int size) {
    double totalarea = 0.00;

    for (int i = 0; i < size; i++)
    {
        totalarea += shapes[i]->area();
    }

    return totalarea;
}