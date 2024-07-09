#pragma once

//madisont, adilf, armaanm - prog71020, lab 04 - global functions interface

#ifndef GLOBAL_LIBRARY_H
#define GLOBAL_LIBRARY_H

/*LIBRARIES AND MACROS*/
#include "shapes.h"
#include "cars.h"

/*GLOBAL FUNCTIONS*/
void globaldraw(SHAPE& obj);
void globaldrive(BMW& car);
void globaldrive(MAZDA& car);
double globalarea(SHAPE* shapes[], int size);

#endif //GLOBAL_LIBRARY_H