GLUquadric *q;    //for creating cylindrical objects

void table()
{
  glPushMatrix();
    glColor4f(0.0, 0.0, 0.0, 1.0);
    glTranslatef(-50.0, -280.0, 0.0);
    glScalef(1.0, 0.04, 1.0);
    glutSolidCube(30.0);
  glPopMatrix();

  glPushMatrix();
    glColor4f(0.0, 0.0, 0.0, 1.0);
    glTranslatef(-50.0, -280.0, 0.0);
    glRotatef(90, 1.0, 0.0, 0.0);
    gluCylinder(q, 1.0, 1.0, 17.0, 20, 5);
  glPopMatrix();

  glPushMatrix();
    glColor4f(0.0, 0.0, 0.0, 1.0);
    glTranslatef(-50, -297, 0.0);
    glScalef(10.0, 1.0, 1.0);
    glutSolidCube(2.0);
  glPopMatrix();

  glPushMatrix();
    glColor4f(0.0, 0.0, 0.0, 1.0);
    glTranslatef(-50.0, -297.0, 0.0);
    glRotatef(90.0, 0.0, 1.0, 0.0);
    glScalef(10.0, 1.0, 1.0);
    glutSolidCube(2.0);
  glPopMatrix();

  glPushMatrix();
    glColor4f(0.0, 1.0, 1.0, 1.0);
    glTranslatef(-60.0, -275.0, 0.0);
    glutSolidTeapot(3.0);
  glPopMatrix();
}
