void snowlady()
{
  glPushMatrix(); //lower body
    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(-90.0, -290.0, 0.0);
    glutSolidSphere(10.0, 100, 50);
  glPopMatrix();

  glPushMatrix(); //body
    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(-90.0, -278.0, 0.0);
    glutSolidSphere(6.0, 100, 50);
  glPopMatrix();

  glPushMatrix(); //left arm
    glColor3f(0.0, 0.0, 0.0);
    glTranslatef(-96.0, -279, 0.0);
    glRotatef(68.0, 0.0, 0.0, 1.0);
    glScalef(6.0, 1.0, 1.0);
    glutSolidCube(1.0);
  glPopMatrix();

  glPushMatrix(); //left arm joint
    glColor3f(0.0, 0.0, 0.0);
    glTranslatef(-97.0, -282, 0.0);
    glutSolidSphere(1.5, 100, 50);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-97.0, -283, 3.5);
    glRotatef(20.0, 1.0, 0.0, 0.0);
    glScalef(1.0, 1.0, 7.0);
    glutSolidCube(1.0);
  glPopMatrix();

  glPushMatrix(); //right arm
    glColor3f(0.0, 0.0, 0.0);
    glTranslatef(-84.0, -279, 0.0);
    glRotatef(-68.0, 0.0, 0.0, 1.0);
    glScalef(6.0, 1.0, 1.0);
    glutSolidCube(1.0);
  glPopMatrix();

  glPushMatrix(); //right arm joint
    glColor3f(0.0, 0.0, 0.0);
    glTranslatef(-83.0, -282, 0.0);
    glutSolidSphere(1.5, 100, 50);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-83.0, -283, 3.5);
    glRotatef(20.0, 1.0, 0.0, 0.0);
    glScalef(1.0, 1.0, 7.0);
    glutSolidCube(1.0);
  glPopMatrix();

  glPushMatrix(); // head
    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(-90.0, -270.0, 0.0);
    glutSolidSphere(5.0, 100, 50);
  glPopMatrix();

  glPushMatrix(); //left eye
    glColor3f(1.0, 0.0, 1.0);
    glTranslatef(-91.5, -268.0, 4.0);
    glutSolidSphere(0.6, 100, 50);
  glPopMatrix();

  glPushMatrix(); //right eye
    glColor3f(1.0, 0.0, 1.0);
    glTranslatef(-88.5, -268.0, 4.0);
    glutSolidSphere(0.6, 100, 50);
  glPopMatrix();

  glPushMatrix(); //nose
    glColor3f(1.0, 0.0, 0.0);
    glTranslatef(-90.0, -270.0, 5.0);
    glScalef(1.0, 1.0, 4.0);
    glutSolidOctahedron();
  glPopMatrix();

  glPushMatrix(); //upper button
    glColor3f(0.0, 0.0, 0.0);
    glTranslatef(-90.0, -275.0, 5.0);
    glutSolidSphere(0.6, 100, 50);
  glPopMatrix();

  glPushMatrix(); //lower button
    glColor3f(0.0, 0.0, 0.0);
    glTranslatef(-90.0, -278.0, 5.7);
    glutSolidSphere(0.6, 100, 50);
  glPopMatrix();
}
