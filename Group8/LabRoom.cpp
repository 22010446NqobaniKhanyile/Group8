#include<stdlib.h>
#include<stdio.h>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <string.h>

#include <GL/glut.h>
#include <GL/freeglut_ext.h>
#include "cooler.h"
#include "chair.h"
#include "robot.h"
#include "table.h"
#include "student.h"
#include "window.h"

#define WINDOW_WIDTH 3000 
#define WINDOW_HEIGHT 3000



using namespace std;

//Cooler
Cooler CoolerObject;
// angle of rotation for the camera direction
float angle = 0.0, yAngle = 0.0;
// actual vector representing the camera's direction
float lx = 0.0f, ly = 0.0f, lz = -1.0f;
// XZ position of the camera
float x = -5.0f, z = 18.0f;
float roll = 0.0f;

//for mouse movements
float halfWidth = (float)(WINDOW_WIDTH / 3.0);
float halfHeight = (float)(WINDOW_HEIGHT / 3.0);
float mouseX = 0.0f, mouseY = 0.0f;







void renderScene(void) {

	// Clear Color and Depth Buffers

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// Reset transformations
	glLoadIdentity();
	// Set the camera
	gluLookAt(x, 2.5f, z, x + lx, 2.5f + ly, z + lz, roll + 0.0f, 2.5f, 0.0f);





	// floor tile
	glColor3f(0.149f, 0.149f, 0.149f);
	glBegin(GL_QUADS);
	glVertex3f(-10.0f, 0.0f, -10.0f);
	glVertex3f(-10.0f, 0.0f, 10.0f);
	glVertex3f(10.0f, 0.0f, 10.0f);
	glVertex3f(10.0f, 0.0f, -10.0f);
	glEnd();

	//front wall
	glColor3f(0.8f, 0.8f, 0.9f); // Light purple color
	glBegin(GL_QUADS);
	glVertex3f(-10.0f, 0.0f, -10.0f);
	glVertex3f(-10.0f, 7.0f, -10.0f);
	glVertex3f(10.0f, 7.0f, -10.0f);
	glVertex3f(10.0f, 0.0f, -10.0f);
	glEnd();

	//left wall
	glColor3f(0.8f, 0.6f, 0.9f); // Pale lilac color
	glBegin(GL_QUADS);
	glVertex3f(-10.0f, 0.0f, -10.0f);
	glVertex3f(-10.0f, 7.0f, -10.0f);
	glVertex3f(-10.0f, 7.0f, 10.0f);
	glVertex3f(-10.0f, 0.0f, 10.0f);
	glEnd();




	//right wall
	glColor3f(0.8f, 0.6f, 0.9f); // Pale lilac color
	glBegin(GL_QUADS);
	glVertex3f(10.0f, 0.0f, -10.0f);
	glVertex3f(10.0f, 7.0f, -10.0f);
	glVertex3f(10.0f, 7.0f, 10.0f);
	glVertex3f(10.0f, 0.0f, 10.0f);
	glEnd();

	//roof
	glColor3f(0.95f, 0.95f, 0.95f);
	glBegin(GL_QUADS);
	glVertex3f(-10.0f, 7.0f, -10.0f);
	glVertex3f(10.0f, 7.0f, -10.0f);
	glVertex3f(10.0f, 7.0f, 10.0f);
	glVertex3f(-10.0f, 7.0f, 10.0f);
	glEnd();



	// Draw student chairs
	Chair ChairObject[1][3];
	for (int i = -1; i <= 1; i += 2) {
		for (int j = -3; j <= 3; j += 2) {
			glPushMatrix();
			glTranslatef(i * 7.5, 0.8f, j * 2.0 + 2.2f);
			glScalef(0.25f, 0.25f, 0.25f);
			glRotatef(180.0, 0.0, 1.0, 0.0);
			ChairObject[i][j].drawChair();
			glPopMatrix();
		}
	}

	// Draw student tables
	Robot robotObject[1][4];
	Table TableObject[1][4];
	for (int i = -1; i <= 1; i += 2) {
		for (int j = -3; j <= 3; j += 2) {
			glPushMatrix();
			glTranslatef(i * 5.5 + 0.3f, 1.2f, j * 2.0 + 1.2f);
			glScalef(0.9f, 0.4f, 0.4f);
			TableObject[i][j].drawTable();
			glPopMatrix();

			// Draw robot
			glPushMatrix();
			glTranslatef(i * 5.5 + 0.3f, 1.2f, j * 2.0 + 1.2f);
			glScalef(0.9f, 0.4f, 0.4f);
			robotObject[i][j].drawRobot();
			glPopMatrix();



			//calling a student class
			Student StudentObject[1][4];
			glPushMatrix();
			glTranslatef(i * 4.5, 1.6f, j * 2.0 + 2.2f);
			glScalef(0.5f, 0.4f, 0.4f);
			StudentObject[i][j].drawStudent();
			glPopMatrix();



		}
	}



	// smartboard
	glColor3f(0.149f, 0.149f, 0.149f); //frame color
	glBegin(GL_QUADS);
	glVertex3f(-6.0f, 2.0f, -9.99f);
	glVertex3f(-6.0f, 5.5f, -9.99f);
	glVertex3f(6.0f, 5.5f, -9.99f);
	glVertex3f(6.0f, 2.0f, -9.99f);
	glEnd();

	glColor3f(0.95f, 0.95f, 0.95f);// smartboard screen
	glBegin(GL_QUADS);
	glVertex3f(-5.8f, 2.2f, -9.98f);
	glVertex3f(-5.8f, 5.3f, -9.98f);
	glVertex3f(5.8f, 5.3f, -9.98f);
	glVertex3f(5.8f, 2.2f, -9.98f);
	glEnd();



	//windows
	Window windowObject;
	windowObject.drawWindowOne();
	windowObject.drawWindowTwo();
	windowObject.drawWindowApron();
	glPushMatrix();
	glTranslatef(0.0f, 0.0f, 8.0f);
	windowObject.drawWindowApron();
	glPopMatrix();


	
	glPushMatrix();
	glTranslatef(0.0f, 6.0f, 0.0);
	glScalef(0.3f, 0.3f, 0.3f);
	CoolerObject.drawCooler();
	glPopMatrix();




	glutSwapBuffers();
}

// Handles the events triggered when one of the arrow keys are pressed.
// @param key : key pressed
// @param xx : x coordinate of mouse position
// @param yy : y coordinate of mouse position
void processSpecialKeys(int key, int xx, int yy) {

	float fraction = 0.1f;

	switch (key) {
	case GLUT_KEY_LEFT:
		x += sin(angle - M_PI / 2.0) * fraction;
		z += -cos(angle - M_PI / 2.0) * fraction;
		break;
	case GLUT_KEY_RIGHT:
		x += sin(M_PI / 2.0 + angle) * fraction;
		z += -cos(M_PI / 2.0 + angle) * fraction;
		break;
	case GLUT_KEY_UP:
		x += lx * fraction;
		z += lz * fraction;
		break;
	case GLUT_KEY_DOWN:
		x -= lx * fraction;
		z -= lz * fraction;
		break;
	}
}


// Handles the events triggered when any key on the keyboard is pressed.
//Specifically, handles w,a,s,d and Esc.
// moves the camera frward, backward and sideways.
// @param key : key pressed
// @param xx : x coordinate of mouse position
// @param yy : y coordinate of mouse position
void processNormalKeys(unsigned char key, int xx, int yy) {
	float fraction = 0.1f;
	if (key == 'w') {
		x += lx * fraction;
		z += lz * fraction;
	}
	else if (key == 'a') {
		x += sin(angle - M_PI / 2.0) * fraction;
		z += -cos(angle - M_PI / 2.0) * fraction;
	}
	else if (key == 's') {
		x -= lx * fraction;
		z -= lz * fraction;
	}
	else if (key == 'd') {
		x += sin(M_PI / 2.0 + angle) * fraction;
		z += -cos(M_PI / 2.0 + angle) * fraction;
	}
	else if (key == 'x') {
		roll += 0.5f;
	}
	else if (key == 'z') {
		roll -= 0.5f;
	}

	if (key == 27)
		exit(0);
}



// Adjusts the viewport sie when the window size is changed and sets the projection.
// @param w : new width of window
// @param h : new height of window
void changeSize(int w, int h) {

	// Prevent a divide by zero, when window is too short
	// (you cant make a window of zero width).
	if (h == 0)
		h = 1;
	float ratio = w * 1.0 / h;

	// Use the Projection Matrix
	glMatrixMode(GL_PROJECTION);

	// Reset Matrix
	glLoadIdentity();

	// Set the viewport to be the entire window
	glViewport(0, 0, w, h);
	halfWidth = (float)(w / 2.0);
	halfHeight = (float)(h / 2.0);

	// Set the correct perspective.
	gluPerspective(45.0f, ratio, 0.1f, 100.0f);

	// Get Back to the Modelview
	glMatrixMode(GL_MODELVIEW);
}

void animate() {

	CoolerObject.rotateCooler();
     /* refresh screen */
	glutPostRedisplay();
}

int main(int argc, char** argv) {

	// init GLUT and create window
	glutInit(&argc, argv);
	
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(3000, 3000);
	glutCreateWindow("LabRoom");

	// register callbacks
	glutDisplayFunc(renderScene);
	glutReshapeFunc(changeSize);
	glutIdleFunc(animate);
	glutKeyboardFunc(processNormalKeys);
	glutSpecialFunc(processSpecialKeys);
	

	// OpenGL init
	glEnable(GL_DEPTH_TEST);

	// enter GLUT event processing cycle
	glutMainLoop();

	return 1;
}