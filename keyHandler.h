float angle = 0.0; //angle of rotation for the camera direction
float cpx = 0, cpy = -220, cpz = 200; //camera position x, y, z
float epx = -20, epy = -220, epz = 0; //eye position x, y, z
float cfpx = 0, cfpy = -220, cfpz = 200; //camera's fixed position
float efpx = 0, efpy = -290, efpz = 0; //eyes' fixed position x, y, z
int mode1 = 1;

void special(int key, int x, int y)
{
  if (key == GLUT_KEY_UP && cpz > 5 && mode1)
	{
		if (cpx == 0)
			cpz -= 5;
		if (cpx > 0)
			cpz -= 5;
			cpx -= 5;
		if (cpx < 0)
			cpz -= 5;
			cpx += 5;
	}
	else if (key == GLUT_KEY_DOWN && cpz < 290 && mode1)
	{
		if (cpx == 0)
			cpz += 5;
		if (cpx > 0)
			cpx += 5;
			cpz += 5;
		if (cpx < 0)
			cpx -= 5;
			cpz += 5;
	}
	else if (key == GLUT_KEY_LEFT) angle -= 5;
  else if (key == GLUT_KEY_RIGHT) angle += 5;

  glutPostRedisplay();
}


void keyboard(unsigned char key, int x, int y)
{
	switch(key)
	{
		case 'c': //press 'c' change the camera to first person view
		cpx = rpx;
		cpy = rpy;
		cpz = rpz + 8;
		epx = cpx + 8;
		epy = cpy;
		epz = cpz;
		mode1 = 0;
		glutPostRedisplay();
		break;

		case 'b': //press 'b' change camera back to default view
		cpx = cfpx;
		cpy = cfpy;
		cpz = cfpz;
		epx = efpx;
		epy = efpy;
		epz = efpz;
		mode1 = 1;
		glutPostRedisplay();
		break;
	}
}
