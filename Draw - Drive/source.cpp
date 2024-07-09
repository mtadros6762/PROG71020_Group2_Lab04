#include "global.h"
#include "shapes.h"
#include "cars.h"

//madisont, adilf, armaanm - prog71020, lab 04 - source code

/*MAIN CONCEPTS*/
//• Inheritance
//• Function overriding
//• Virtual function
//• Pure virtual function
//• Polymorphism
//• Abstract classes

//REQUIREMENTS
/*You should write a well-structured, readable, and clean code that is based on all
concepts that you have studied so far.
In this lab the only limit is your imagination. Be creative!*/

using namespace std;

int main(void) {
    RECTANGLE rect(3, 4);
    RECTANGLE rect2(5, 6);
    CIRCLE circ(3);
    CIRCLE circ2(5);
    BMW bmw;
    MAZDA mazda;

    // creating an array of shapes 

    SHAPE* shapes[] = { &rect,&rect2, &circ, &circ2 };

    // Test drawing
    globaldraw(rect);
    globaldraw(circ2);
    globaldraw(bmw);
    globaldraw(mazda);

    // Test driving
    globaldrive(bmw);
    globaldrive(mazda);

    // Testing gloabal area function
    double globalArea = globalarea(shapes, 4);
    cout << "Total area of all shapes: " << globalArea << "\n";
}