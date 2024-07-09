#pragma once

//madisont, adilf, armaanm - prog71020, lab 04 - rectangle and circle objects interface

#ifndef SHAPES_LIBRARY_H
#define SHAPES_LIBRARY_H

/*LIBRARIES AND MACROS*/
#include <iostream>

/*CLASSES*/
class SHAPE {
public:
    virtual void draw();
    virtual double area();
};

class RECTANGLE : public SHAPE {
    double l, b;

public:
    RECTANGLE(double length, double breadth);
    double area() override;
    void draw() override;
};

class CIRCLE : public SHAPE {
    double r;

public:
    CIRCLE(double radius);
    double area() override;
    void draw() override;
};

#endif //SHAPES_LIBRARY_H