// ass1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <math.h>
#include <iostream>
#include <stdlib.h>

#ifdef __APPLE__
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

//prototype
void initRendering();
void handleResize(int w, int h);
void drawPentagon();
void drawHexagon();
void drawHeptagon();
void drawOctagon();
void drawNonagon();
void drawDecagon();
void drawScene();
void handleKeypress(unsigned char key, int x, int y);

//Global varibles


int main(int argc, char** argv)
{	
	

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(900, 900);
	glutInitWindowPosition(0, 0);
	//Create the window
	glutCreateWindow(" Assignment 1 ");
	initRendering();

	//Set handler functions
	glutDisplayFunc(drawScene);
	glutKeyboardFunc(handleKeypress);
	glutReshapeFunc(handleResize);

	glutMainLoop();
    return 0;
}

//Initializes 3D rendering
void initRendering() {
	glEnable(GL_DEPTH_TEST);
}

//Called when the window is resized
void handleResize(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

void drawPentagon() { 

	//lowerTriangle
	glBegin(GL_TRIANGLES);
	
	glVertex3f(-0.4f, 0.f, -5.0f);
	glVertex3f(0.4f, 0.f, -5.0f);
	glVertex3f(0.6f, 0.6f, -5.0f);

	glEnd();
	
	//middleTriangle
	glBegin(GL_TRIANGLES);

	glVertex3f(-0.4f, 0.f, -5.0f);
	glVertex3f(0.6f, 0.6f, -5.0f);
	glVertex3f(-0.6f, 0.6f, -5.0f);

	glEnd();

	//upperTriangle
	glBegin(GL_TRIANGLES);

	glVertex3f(-0.0f, 1.f, -5.0f);
	glVertex3f(0.6f, 0.6f, -5.0f);
	glVertex3f(-0.6f, 0.6f, -5.0f);

	glEnd();


}

void drawHexagon() {

	//lowerTriangle
	glBegin(GL_TRIANGLES);

	glVertex3f(1.5f, 0.f, -5.0f);
	glVertex3f(2.f, 0.f, -5.0f);
	glVertex3f(1.75f, 0.43f, -5.0f);

	glEnd();


	glBegin(GL_TRIANGLES);

	glVertex3f(1.75f, 0.43f, -5.0f);
	glVertex3f(2.f, 0.f, -5.0f);
	glVertex3f(2.25f, 0.43f, -5.0f);

	glEnd();


	glBegin(GL_TRIANGLES);

	glVertex3f(1.75f, 0.43f, -5.0f);
	glVertex3f(1.5f, 0.f, -5.0f);
	glVertex3f(1.25f, 0.43f, -5.0f);

	glEnd();


	glBegin(GL_TRIANGLES);

	glVertex3f(1.75f, 0.43f, -5.0f);
	glVertex3f(1.5f, 0.86f, -5.0f);
	glVertex3f(1.25f, 0.43f, -5.0f);

	glEnd();


	glBegin(GL_TRIANGLES);

	glVertex3f(1.75f, 0.43f, -5.0f);
	glVertex3f(1.5f, 0.86f, -5.0f);
	glVertex3f(2.f, 0.86f, -5.0f);

	glEnd();


	glBegin(GL_TRIANGLES);

	glVertex3f(1.75f, 0.43f, -5.0f);
	glVertex3f(2.25f, 0.43f, -5.0f);
	glVertex3f(2.f, 0.86f, -5.0f);

	glEnd();


}

void drawHeptagon() {

	glBegin(GL_QUADS);

	glVertex3f(-1.5f, 0.f, -5.f);
	glVertex3f(-1.25f, 0.4f, -5.f);
	glVertex3f(-2.25f, 0.4f, -5.f);
	glVertex3f(-2.f, 0.f, -5.f);

	glEnd();

	glBegin(GL_QUADS);

	glVertex3f(-1.4f, 0.8f, -5.f);
	glVertex3f(-1.25f, 0.4f, -5.f);
	glVertex3f(-2.25f, 0.4f, -5.f);
	glVertex3f(-2.1f, 0.8f, -5.f);

	glEnd();


	glBegin(GL_TRIANGLES);

	glVertex3f(-1.4f, 0.8f, -5.f);
	glVertex3f(-1.75f, 1.f, -5.f);
	glVertex3f(-2.1f, 0.8f, -5.f);

	glEnd();
}

void drawOctagon() {

	glBegin(GL_QUADS);

	glVertex3f(-1.9f, -0.5f, -5.f);
	glVertex3f(-1.6f, -0.5f, -5.f);
	glVertex3f(-1.25f, -0.9f, -5.f);
	glVertex3f(-2.25f, -0.9f, -5.f);
	

	glEnd();

	glBegin(GL_QUADS);

	glVertex3f(-1.25f, -1.3f, -5.f);
	glVertex3f(-2.25f, -1.3f, -5.f);
	glVertex3f(-2.25f, -0.9f, -5.f);
	glVertex3f(-1.25f, -0.9f, -5.f);

	glEnd();

	glBegin(GL_QUADS);

	glVertex3f(-1.9f, -1.7f, -5.f);
	glVertex3f(-1.6f, -1.7f, -5.f);
	glVertex3f(-1.25f, -1.3f, -5.f);
	glVertex3f(-2.25f, -1.3f, -5.f);
	

	glEnd();



}

void drawNonagon() {

	glBegin(GL_QUADS);

	glVertex3f(-0.4f, -1.7f, -5.f);
	glVertex3f(-0.f, -1.7f, -5.f);
	glVertex3f(0.2f, -1.4f, -5.f);
	glVertex3f(-0.6f, -1.4f, -5.f);

	glEnd();

	glBegin(GL_QUADS);

	glVertex3f(-0.7f, -1.1f, -5.f);
	glVertex3f(0.3f, -1.1f, -5.f);
	glVertex3f(0.2f, -1.4f, -5.f);
	glVertex3f(-0.6f, -1.4f, -5.f);

	glEnd();

	glBegin(GL_QUADS);

	glVertex3f(-0.5f, -0.8f, -5.f);
	glVertex3f(0.1f, -0.8f, -5.f);
	glVertex3f(0.3f, -1.1f, -5.f);
	glVertex3f(-0.7f, -1.1f, -5.f);

	glEnd();

	glBegin(GL_TRIANGLES);

	
	glVertex3f(0.1f, -0.8f, -5.f);
	glVertex3f(-0.5f, -0.8f, -5.f);
	glVertex3f(-0.2f, -0.65f, -5.f);
	

	glEnd();

}

//Called when a key is pressed
void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
	case 27: //Escape key
		exit(0);
		break;

	}
}

void drawScene() {

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
	glPushMatrix();

	glColor3f(0.592f, 0.909f, 0.988f); 
	drawPentagon();

	glColor3f(0.349f, 0.674f, 0.756f); 
	drawHexagon();

	glColor3f(0.6f, 0.349f, 0.6f); 
	drawHeptagon();
	 
	glColor3f(0.56f, 0.7f, 0.1f);
	drawOctagon();

	glColor3f(0.56f, 0.56f, 0.56f);
	drawNonagon();

	glPopMatrix();
	

	
	/********************************************************************************/
	glutSwapBuffers();
	glFlush();

}

