#include "shapes.h"

//madisont, adilf, armaanm - prog71020, lab 04 - rectangle and circle objects implementation

//REQUIREMENTS
/*Design, implement and test a Rectangle and Circle classes:
a. They have a function to calculate their area.
b. They can be drawn using the global draw function.*/

using namespace std;

// simple drawing function
void SHAPE::draw()
{
    cout << "Drawing something.... \n";
}

// simple area function
double SHAPE::area()
{
    cout << "calculating area";
    double area = 0.00;
    return area;
}

// constructors
RECTANGLE::RECTANGLE(double length, double breadth)
{
    l = length;
    b = breadth;
}

// finding the area of the rectangle 
double RECTANGLE::area() {
    double area = 0.00;
    area = l * b;
    return area;
}

// drawing a rectangle based on length and breadth
void RECTANGLE::draw() {
    cout << "Drawing a rectangle \n";
    // creating a loop for columns and rows 
    for (int i = 0; i < l; ++i) {
        for (int j = 0; j < b; ++j) {
            // i == 0 means top row, i == l-1 means bottom row, j==0,i==0 means left and right coloumn 
            if (i == 0 || i == l - 1 || j == 0 || j == b - 1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// constructor 
CIRCLE::CIRCLE(double radius) {
    r = radius;
}

// finding the area of the circle 
double CIRCLE::area() {
    double area = 0.00;
    area = 3.14159 * r * r;
    return area;
}

// drawing a circle based on radius 
void CIRCLE::draw() {
    cout << "Drawing a circle \n";

    // finding diameter
    int diameter = 2 * r;

    // iterates over each coloumn and rows
    for (int i = 0; i <= diameter; ++i) {
        for (int j = 0; j <= diameter; ++j) {
            // calculating distance between coordinate (i,j) and center of the circle (r,r)
            double distance = sqrt((i - r) * (i - r) + (j - r) * (j - r));
            // if ditance is equal to the circle it prints a * otherwise a space. the 0.5 is just to have a smoother circle 
            if (distance > r - 0.5 && distance < r + 0.5) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}