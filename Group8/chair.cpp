#include "chair.h"

//declare components for drawChair class

void Chair::drawChair() {

	//if there is no color aasigned into vertex this one will display 
	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);

	//Front
	//
	glVertex3f(-2.0f, -0.2f, 2.0f);
	glVertex3f(2.0f, -0.2f, 2.0f);
	glVertex3f(2.0f, 0.2f, 2.0f);
	glVertex3f(-2.0f, 0.2f, 2.0f);

	//Right
	//

	glVertex3f(2.0f, -0.2f, -2.0f);
	glVertex3f(2.0f, 0.2f, -2.0f);
	glVertex3f(2.0f, 0.2f, 2.0f);
	glVertex3f(2.0f, -0.2f, 2.0f);

	//Back
	//;
	glVertex3f(-2.0f, -0.2f, -2.0f);
	glVertex3f(-2.0f, 0.2f, -2.0f);
	glVertex3f(2.0f, 0.2f, -2.0f);
	glVertex3f(2.0f, -0.2f, -2.0f);

	//Left
	;
	glVertex3f(-2.0f, -0.2f, -2.0f);
	glVertex3f(-2.0f, -0.2f, 2.0f);
	glVertex3f(-2.0f, 0.2f, 2.0f);
	glVertex3f(-2.0f, 0.2f, -2.0f);

	//top
	//

	glVertex3f(2.0f, 0.2f, 2.0f);
	glVertex3f(-2.0f, 0.2f, 2.0f);
	glVertex3f(-2.0f, 0.2f, -2.0f);
	glVertex3f(2.0f, 0.2f, -2.0f);

	//bottom
	;

	glVertex3f(2.0f, -0.2f, 2.0f);
	glVertex3f(-2.0f, -0.2f, 2.0f);
	glVertex3f(-2.0f, -0.2f, -2.0f);
	glVertex3f(2.0f, -0.2f, -2.0f);

	//front leg
	//front
	//
	glColor3f(0.7, 0.8, 0.8); // Set the color to light gray
	glVertex3f(1.8f, -0.2f, 1.6f);
	glVertex3f(1.4f, -0.2f, 1.6f);
	glVertex3f(1.4f, -3.0f, 1.6f);
	glVertex3f(1.8f, -3.0f, 1.6f);

	//back
	//;

	glVertex3f(1.8f, -0.2f, 1.2f);
	glVertex3f(1.4f, -0.2f, 1.2f);
	glVertex3f(1.4f, -3.0f, 1.2f);
	glVertex3f(1.8f, -3.0f, 1.2f);

	//right
	//

	glVertex3f(1.8f, -0.2f, 1.6f);
	glVertex3f(1.8f, -0.2f, 1.2f);
	glVertex3f(1.8f, -3.0f, 1.2f);
	glVertex3f(1.8f, -3.0f, 1.6f);

	//left
	//;

	glVertex3f(1.4f, -0.2f, 1.6f);
	glVertex3f(1.4f, -0.2f, 1.2f);
	glVertex3f(1.4f, -3.0f, 1.2f);
	glVertex3f(1.4f, -3.0f, 1.6f);

	//back leg back
	//front
	//;

	glVertex3f(1.8f, -0.2f, -1.2f);
	glVertex3f(1.4f, -0.2f, -1.2f);
	glVertex3f(1.4f, -3.0f, -1.2f);
	glVertex3f(1.8f, -3.0f, -1.2f);

	//back
	//;

	glVertex3f(1.8f, -0.2f, -1.6f);
	glVertex3f(1.4f, -0.2f, -1.6f);
	glVertex3f(1.4f, -3.0f, -1.6f);
	glVertex3f(1.8f, -3.0f, -1.6f);

	//right
	//

	glVertex3f(1.8f, -0.2f, -1.6f);
	glVertex3f(1.8f, -0.2f, -1.2f);
	glVertex3f(1.8f, -3.0f, -1.2f);
	glVertex3f(1.8f, -3.0f, -1.6f);

	//left
	//

	glVertex3f(1.4f, -0.2f, -1.6f);
	glVertex3f(1.4f, -0.2f, -1.2f);
	glVertex3f(1.4f, -3.0f, -1.2f);
	glVertex3f(1.4f, -3.0f, -1.6f);

	//leg left front
	//

	glVertex3f(-1.8f, -0.2f, 1.6f);
	glVertex3f(-1.4f, -0.2f, 1.6f);
	glVertex3f(-1.4f, -3.0f, 1.6f);
	glVertex3f(-1.8f, -3.0f, 1.6f);

	//back
	//;

	glVertex3f(-1.8f, -0.2f, 1.2f);
	glVertex3f(-1.4f, -0.2f, 1.2f);
	glVertex3f(-1.4f, -3.0f, 1.2f);
	glVertex3f(-1.8f, -3.0f, 1.2f);

	//right


	glVertex3f(-1.8f, -0.2f, 1.6f);
	glVertex3f(-1.8f, -0.2f, 1.2f);
	glVertex3f(-1.8f, -3.0f, 1.2f);
	glVertex3f(-1.8f, -3.0f, 1.6f);

	//left
	;

	glVertex3f(-1.4f, -0.2f, 1.6f);
	glVertex3f(-1.4f, -0.2f, 1.2f);
	glVertex3f(-1.4f, -3.0f, 1.2f);
	glVertex3f(-1.4f, -3.0f, 1.6f);

	//left leg back front

	//front
	;

	glVertex3f(-1.8f, -0.2f, -1.2f);
	glVertex3f(-1.4f, -0.2f, -1.2f);
	glVertex3f(-1.4f, -3.0f, -1.2f);
	glVertex3f(-1.8f, -3.0f, -1.2f);

	//back
	;

	glVertex3f(-1.8f, -0.2f, -1.6f);
	glVertex3f(-1.4f, -0.2f, -1.6f);
	glVertex3f(-1.4f, -3.0f, -1.6f);
	glVertex3f(-1.8f, -3.0f, -1.6f);

	//right


	glVertex3f(-1.8f, -0.2f, -1.6f);
	glVertex3f(-1.8f, -0.2f, -1.2f);
	glVertex3f(-1.8f, -3.0f, -1.2f);
	glVertex3f(-1.8f, -3.0f, -1.6f);

	//left


	glVertex3f(-1.4f, -0.2f, -1.6f);
	glVertex3f(-1.4f, -0.2f, -1.2f);
	glVertex3f(-1.4f, -3.0f, -1.2f);
	glVertex3f(-1.4f, -3.0f, -1.6f);

	//chair back
	//front





	//;
	//chair back upper part 
	glColor3f(1, 1, 1);
	glVertex3f(-1.8f, 1.2f, -1.8f);
	glVertex3f(1.8f, 1.2f, -1.8f);
	glVertex3f(1.8f, 3.5f, -1.8f);
	glVertex3f(-1.8f, 3.5f, -1.8f);

	glVertex3f(-1.8f, 1.2f, -0.6f);
	glVertex3f(1.8f, 1.2f, -0.6f);
	glVertex3f(1.8f, 3.5f, -0.6f);
	glVertex3f(-1.8f, 3.5f, -0.6f);

	//chair upper side
	glColor3f(0.149f, 0.149f, 0.149f);
	glVertex3f(-1.8f, 1.2f, -1.80f);
	glVertex3f(-1.8f, 1.2f, -0.6f);
	glVertex3f(-1.8f, 3.5f, -0.6f);
	glVertex3f(-1.8f, 3.5f, -1.8f);

	glVertex3f(1.8f, 1.2f, -1.80f);
	glVertex3f(1.8f, 1.2f, -0.6f);
	glVertex3f(1.8f, 3.5f, -0.6f);
	glVertex3f(1.8f, 3.5f, -1.8f);

	//chiar upper top 
	glColor3f(0.149f, 0.149f, 0.149f);
	glVertex3f(-1.8f, 3.5f, -1.80f);
	glVertex3f(-1.8f, 3.5f, -0.6f);
	glVertex3f(1.8f, 3.5f, -0.6f);
	glVertex3f(1.8f, 3.5f, -1.8f);

	glVertex3f(-1.8f, 1.2f, -1.80f);
	glVertex3f(-1.8f, 1.2f, -0.6f);
	glVertex3f(1.8f, 1.2f, -0.6f);
	glVertex3f(1.8f, 1.2f, -1.8f);

	// chair top legs 

	glColor3f(0.7, 0.8, 0.8); // Set the color to light gray
	//side walls
	glVertex3f(-1.2f, 1.2f, -1.20f);
	glVertex3f(-1.2f, 1.2f, -0.6f);
	glVertex3f(-1.2f, .2f, -0.6f);
	glVertex3f(-1.2f, .2f, -1.2f);

	glVertex3f(-.8f, 1.2f, -1.20f);
	glVertex3f(-.8f, 1.2f, -0.6f);
	glVertex3f(-.8f, .2f, -0.6f);
	glVertex3f(-.8f, .2f, -1.2f);

	//froont walls adnd back walls
	glVertex3f(-1.2f, 1.2f, -1.2f);
	glVertex3f(-0.8f, 1.2f, -1.2f);
	glVertex3f(-0.8f, .2f, -1.2f);
	glVertex3f(-1.2f, .2f, -1.2f);

	glVertex3f(-1.2f, 1.2f, -0.6f);
	glVertex3f(-0.8f, 1.2f, -0.6f);
	glVertex3f(-0.8f, .2f, -0.6f);
	glVertex3f(-1.2f, .2f, -0.6f);

	//side walls
	glVertex3f(1.2f, 1.2f, -1.20f);
	glVertex3f(1.2f, 1.2f, -0.6f);
	glVertex3f(1.2f, .2f, -0.6f);
	glVertex3f(1.2f, .2f, -1.2f);

	glVertex3f(.8f, 1.2f, -1.20f);
	glVertex3f(.8f, 1.2f, -0.6f);
	glVertex3f(.8f, .2f, -0.6f);
	glVertex3f(.8f, .2f, -1.2f);

	//froont walls adnd back walls
	glColor3f(0.7, 0.8, 0.8); // Set the color to light gray
	glVertex3f(1.2f, 1.2f, -1.2f);
	glVertex3f(0.8f, 1.2f, -1.2f);
	glVertex3f(0.8f, .2f, -1.2f);
	glVertex3f(1.2f, .2f, -1.2f);

	glVertex3f(1.2f, 1.2f, -0.6f);
	glVertex3f(0.8f, 1.2f, -0.6f);
	glVertex3f(0.8f, .2f, -0.6f);
	glVertex3f(1.2f, .2f, -0.6f);

	//glVertex3f()

	glEnd();

}

