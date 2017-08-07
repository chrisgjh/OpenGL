#include <cmath>
#include <GL/freeglut.h>
#include "loadTGA.h"
#include "skybox.h"
#include "robot.h"
#include "table.h"
#include "keyHandler.h"
#include "glass.h"
#include "snowlady.h"


void display(void)
{
	float lpos[] = {10.0, 40.0, 10.0, 1.0};  //light's position
	float shadowMat[] = {40, 0, 0, 0, -10, 0, -10, -1, 0, 0, 40, 0, 0, 0, 0, 40};
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	gluLookAt(cpx, cpy, cpz, epx, epy, epz, 0, 1, 0);

	glLightfv(GL_LIGHT0, GL_POSITION, lpos);

  glColor4f(1.0, 1.0, 1.0, 1.0);
	if (mode1){
		glRotatef(angle, 0.0, 1.0, 0.0); //for camera's left and right rotate
	}
	skybox();
	table();
	glass();
	snowlady();
	robotBod();

  glutSwapBuffers();
}


void initialize(void)
{
	float grey[] = {0.2, 0.2, 0.2, 1.0}; //for lighting purpose
	float white[]  = {1.0, 1.0, 1.0, 1.0}; //diffuse and specular for light

	float mat_red[] = {1.0, 0.0, 0.0, 1.0}; //material ambient and diffuse
	float mat_white[] = {1.0, 1.0, 1.0, 1.0}; //material specular
	q = gluNewQuadric();

  loadSkybox();

  glClearColor(1.0f, 1.0f, 1.0f, 0.0f);	//set background colour to white
  glClearDepth(1.0f);
  glEnable(GL_NORMALIZE);
  glEnable(GL_TEXTURE_2D);
  glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);	//enable light
	glEnable(GL_LIGHT0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, grey);
		glLightfv(GL_LIGHT0, GL_DIFFUSE, white);
		glLightfv(GL_LIGHT0, GL_SPECULAR, white);

	glEnable(GL_LIGHT1);
		glLightfv(GL_LIGHT1, GL_AMBIENT, mat_red); //give them a nice sunset specular reflection
	  glLightfv(GL_LIGHT1, GL_DIFFUSE, mat_red);
	  glLightfv(GL_LIGHT1, GL_SPECULAR, mat_white);
		glLightf(GL_LIGHT1, GL_SHININESS, 60.0);

		glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
		glEnable(GL_COLOR_MATERIAL);
		glMaterialfv(GL_FRONT, GL_SPECULAR, white);
		glMaterialf(GL_FRONT, GL_SHININESS, 50);


	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45, 1, 1, 1000);
}


void timer(int value)
{
	glutTimerFunc(50, timer, value);
	glutPostRedisplay();
}


int main(int argc, char** argv)
{

  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGBA);
  glutInitWindowSize(600, 600);
  glutInitWindowPosition(150, 150);
  glutCreateWindow("Robots");
  initialize();
  glutDisplayFunc(display);
	glutTimerFunc(70, timer, 0);
  glutSpecialFunc(special);
	glutKeyboardFunc(keyboard);
  glutMainLoop();
  return 1;
}
