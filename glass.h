void glass()
{
  //glass on the table
  glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(-50.0, -272.0, 0.0);
    glRotatef(-90.0, 1.0, 0.0, 0.0);
    gluCylinder(q, 0.0, 2.0, 3.0, 20, 5);
  glPopMatrix();

  glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(-50.0, -276.0, 0.0);
    glRotatef(-90.0, 1.0, 0.0, 0.0);
    gluCylinder(q, 0.07, 0.07, 4.5, 20, 5);
  glPopMatrix();

  glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(-50.0, -276.0, 0.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    glScalef(1.5, 2, 1.5);
    gluCylinder(q, 0.0, 1.0, 1.0, 20, 5);
  glPopMatrix();
}
