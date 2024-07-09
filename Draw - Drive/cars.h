#pragma once

//madisont, adilf, armaanm - prog71020, lab 04 - BMW and Mazda objects interface

#ifndef CARS_LIBRARY_H
#define CARS_LIBRARY_H

/*LIBRARIES AND MACROS*/
#include "shapes.h"

/*CLASSES*/
class BMW : public SHAPE{
public:
    void draw() override;
    void drive();
};

class MAZDA : public SHAPE {
public:
    void draw() override;
    void drive();
};

#endif //CARS_LIBRARY_H