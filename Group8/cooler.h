#pragma once
#ifndef COOLER_H
#define COOLER_H

#include <GL/glut.h>
#include <GL/freeglut_ext.h>
#include <math.h>

//preprocessor directive defines a macro name
#define DEF_D 5

//create class to plot fan 
class Cooler {
private:
	float rotationAngle = 0.0f;

public:

	void drawCooler();

	void rotateCooler();

};

#endif
