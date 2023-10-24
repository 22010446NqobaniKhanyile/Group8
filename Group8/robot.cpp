#include "robot.h"

//declare components for robot
void Robot::drawRobot() {

    // Body color (Robot)
    glColor3f(1.0f, 1.0f, 1.0f); 

    // Draw Body
    glTranslatef(0.0f, 0.75f, 0.0f);
    glutSolidCube(0.80f);

    // Draw Head
    glPushMatrix(); // Save the current transformation matrix
    glColor3f(0.0f, 0.0f, 1.0f);
    glTranslatef(0.0f, 0.6f, 0.0f); // Translate the head relative to the body
    glutSolidCube(0.60f);
    glPopMatrix(); // Restore the previous transformation matrix

    // Draw Eyes
    glPushMatrix();
    glTranslatef(0.0f, 0.8f, 0.18f); // Translate relative to the head's center

    // Translate to the right eye's position
    glPushMatrix();
    glTranslatef(0.15f, 0.0f, 0.18f);
    glColor3f(1.0f, 0.0f, 0.0f);
    glutSolidSphere(0.10f, 10, 10);
    glPopMatrix();

    // Translate to the left eye's position
    glPushMatrix();
    glTranslatef(-0.15f, 0.0f, 0.18f);
    glColor3f(1.0f, 0.0f, 0.0f);
    glutSolidSphere(0.10f, 10, 10);
    glPopMatrix();

    // Draw eye pupils
     // left pupil
    glColor3f(0.0f, 0.0f, 0.0f);
    glTranslatef(-0.15f, 0.0f, 0.18f);
    glutSolidCone(0.08f, 0.5f, 10, 2);
    glPopMatrix();
    // right pupil
    glPushMatrix();
    glColor3f(0.0f, 0.0f, 0.0f);
    glTranslatef(0.15f, 0.8f, 0.18f);
    glutSolidCone(0.09f, 0.5f, 10, 2);
    glPopMatrix();

    //Robot Left Arm
    glColor3f(0.6f, 0.6f, 0.6f); // Set color to grey (R=0.6, G=0.6, B=0.6)
    glTranslatef(-0.45f, 0.4f, 0.0f); // Translate to the left side of the body
    glScalef(1.2, 0.4, 0.2);
    glutSolidSphere(0.60f, 10, 10);
    glScalef(1 / 1.2, 1 / 0.4, 1 / 0.2);



    //Robot Left hand
    glPushMatrix();

    // Define a rotation angle (in degrees)
    static float rotationAngle = 0.0f;

    // Apply rotation around the y-axis (you can adjust the axis as needed)
    glRotatef(rotationAngle, 1.0f, 0.0f, 0.0f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glTranslatef(-0.45f, 0.0f, 0.0f); // Translate to the left side of the body
    glScalef(1.2, 0.4, 0.2);
    glutSolidCube(0.90f);
    glScalef(1 / 1.2, 1 / 0.4, 1 / 0.2);

    glPopMatrix();

    // Update the rotation angle (increment it over time)
    rotationAngle += 0.1f; // You can adjust the rotation speed


}


