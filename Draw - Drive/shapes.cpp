#include "shapes.h"

//madisont, adilf, armaanm - prog71020, lab 04 - rectangle and circle objects implementation

//REQUIREMENTS
/*Design, implement and test a Rectangle and Circle classes:
a. They have a function to calculate their area.
b. They can be drawn using the global draw function.*/

using namespace std;

void SHAPE::draw()
{
    cout << "Drawing something.... \n";
}

double SHAPE::area()
{
    cout << "calculating area";
    double area = 0.00;
    return area;
}

RECTANGLE::RECTANGLE(double length, double breadth)
{
    l = length;
    b = breadth;
}

double RECTANGLE::area() {
    double area = 0.00;
    area = l * b;
    return area;
}

void RECTANGLE::draw() {
    cout << "Drawing a rectangle \n";
    for (int i = 0; i < l; ++i) {
        for (int j = 0; j < b; ++j) {
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

CIRCLE::CIRCLE(double radius) {
    r = radius;
}

double CIRCLE::area() {
    double area = 0.00;
    area = 3.14159 * r * r;
    return area;
}

void CIRCLE::draw() {
    cout << "Drawing a circle \n";
    int diameter = 2 * r;
    for (int i = 0; i <= diameter; ++i) {
        for (int j = 0; j <= diameter; ++j) {
            double distance = sqrt((i - r) * (i - r) + (j - r) * (j - r));
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