#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include <cmath>
#include <dos.h>
#include<stdio.h>


#define PI 3.1416
#include "student.h"

void ellipse(float radius_x, float radius_y)
{
    int i = 0;
    float angle1 = 0.0;

    glBegin(GL_POLYGON);

    for (i = 0; i < 100; i++)
    {
        angle1 = 2 * PI * i / 100;
        glVertex3f(cos(angle1) * radius_x, sin(angle1) * radius_y, 0);
    }

    glEnd();
}

//declare components for the students

void Student::drawStudent() {

    //student position
    glPushMatrix();
    glTranslatef(0.0f, 0.75f, 0.0f);
    glScalef(0.10, 0.11, 5);
    glPushMatrix();


    //student  top t-shirt
    glColor3f(0.149f, 0.149f, 0.149f);
    glBegin(GL_POLYGON);
    glVertex2d(-6, -6);
    glVertex2d(-11, -9);
    glVertex2d(-9, -13);
    glVertex2d(-6, -11);
    glVertex2d(-6, -22);
    glVertex2d(6, -22);
    glVertex2d(6, -11);
    glVertex2d(9, -13);
    glVertex2d(11, -9);
    glVertex2d(6, -6);
    glVertex2d(4, -10);
    glVertex2d(-4, -10);
    glEnd();
    glPopMatrix();

    glPushMatrix();     //left hand
    glColor3f(0.87, 0.72, 0.53);
    glBegin(GL_QUADS);
    glVertex2d(-11, -9);
    glVertex2d(-9, -13);
    glVertex2d(-13, -20);
    glVertex2d(-16, -18);
    glEnd();

    glPopMatrix();

    glPushMatrix();     //left palm
    glTranslated(-15, -20, 0);
    glColor3f(0.87, 0.72, 0.53);
    ellipse(3, 2.5);
    glPopMatrix();


    glPushMatrix();     //right hand
    glColor3f(0.87, 0.72, 0.53);
    glBegin(GL_QUADS);
    glVertex2d(11, -9);
    glVertex2d(9, -13);
    glVertex2d(13, -20);
    glVertex2d(16, -18);
    glEnd();
    glPopMatrix();

    //right  palm
    glPushMatrix();
    glTranslated(15, -20, 0);
    glColor3f(0.87, 0.72, 0.53);
    ellipse(3, 2.5);
    glPopMatrix();

    //min skirt
    glPushMatrix();
    glColor3f(0.8f, 0.8f, 0.9f); // Light purple color
    glBegin(GL_QUADS);
    glVertex2d(-6, -22);
    glVertex2d(6, -22);
    glVertex2d(13, -32);
    glVertex2d(-13, -32);
    glEnd();
    glPopMatrix();

    //left leg
    glPushMatrix();
    glColor3f(0.87, 0.72, 0.53);
    glBegin(GL_QUADS);
    glVertex2d(-6, -32);
    glVertex2d(-2, -32);
    glVertex2d(-2, -38);
    glVertex2d(-6, -38);
    glEnd();
    glPopMatrix();

    glPushMatrix();     //right leg
    glColor3f(0.87, 0.72, 0.53);
    glBegin(GL_QUADS);
    glVertex2d(6, -32);
    glVertex2d(2, -32);
    glVertex2d(2, -38);
    glVertex2d(6, -38);
    glEnd();
    glPopMatrix();

    glPushMatrix();     //right shoe
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex2d(10, -42);
    glVertex2d(2, -42);
    glVertex2d(2, -38);
    glVertex2d(6, -38);
    glEnd();
    glPopMatrix();

    glPushMatrix();         //left shoe
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex2d(-10, -42);
    glVertex2d(-2, -42);
    glVertex2d(-2, -38);
    glVertex2d(-6, -38);
    glEnd();
    glPopMatrix();



    glPushMatrix(); //hair
    glColor3f(0, 0, 0);
    // drawEllipse(9,10,10);
    ///* circle(9, 10);*/
    glPopMatrix();



    glPushMatrix();         //head, neck, nose ,eye, lips
    glColor3f(0.87, 0.72, 0.53);
    ellipse(7, 6);            //head
    glBegin(GL_QUADS);      //neck
    glVertex2d(-6, -6);
    glVertex2d(6, -6);
    glVertex2d(4, -10);
    glVertex2d(-4, -10);
    glEnd();



    glPopMatrix();

    glPopMatrix();


    glPopMatrix();
}




