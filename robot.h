float rpx = 0, rpy = -260, rpz = 0; //robot position x, y, z

void leftLeg()
{
  glColor4f(0.0, 1.0, 1.0, 1.0); //joint between leg and body
  glPushMatrix();
    glTranslatef(-3.5, -23.0, 0.0);
    glutSolidSphere(3.0, 10.0, 10.0);
  glPopMatrix();

  //upper leg
  glPushMatrix();
    glTranslatef(-3.5, -27.0, 1.0);
    glRotatef(-10, 1.0, 0.0, 0.0);
    glScalef(0.9, 2.5, 1.0);
    glutSolidCube(3.0);
  glPopMatrix();

  //kneel
  glPushMatrix();
    glTranslatef(-3.5, -30.0, 1.5);
    glutSolidSphere(2.5, 10.0, 10.0);
  glPopMatrix();

  //lower leg
  glPushMatrix();
    glTranslatef(-3.5, -34.0, 1.5);
    glScalef(0.9, 2.7, 1.0);
    glutSolidCube(3.0);
  glPopMatrix();

  //feet
  glPushMatrix();
    glTranslatef(-3.5, -38.0, 1.9);
    glScalef(0.5, 0.2, 1.2);
    glutSolidCube(6.0);
  glPopMatrix();
}

void rightLeg()
{
  glColor4f(0.0, 1.0, 1.0, 1.0);
  glPushMatrix();
    glTranslatef(3.5, -23.0, 0.0);
    glutSolidSphere(3.0, 10.0, 10.0);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(3.5, -27.0, 1.0);
    glRotatef(-10, 1.0, 0.0, 0.0);
    glScalef(0.9, 2.5, 1.0);
    glutSolidCube(3.0);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(3.5, -30.0, 1.5);
    glutSolidSphere(2.5, 10.0, 10.0);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(3.5, -34.0, 1.5);
    glScalef(0.9, 2.7, 1.0);
    glutSolidCube(3.0);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(3.5, -38.0, 1.9);
    glScalef(0.5, 0.2, 1.2);
    glutSolidCube(6.0);
  glPopMatrix();
}

void leftArm()
{
  glColor4f(0.8, 0.0, 0.0, 1.0); //left arm
  glPushMatrix();
    glTranslatef(-8.0, -10.0, 0.0);
    glutSolidSphere(3.5, 10.0, 10.0);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-9.0, -13.0, 0.0);
    glRotatef(-20, 0.0, 0.0, 1.0);
    glScalef(0.9, 2, 1.0);
    glutSolidCube(3.0);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-11.0, -17.0, 0.0);
    glutSolidSphere(2.5, 10.0, 10.0);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-11.0, -22.0, 2.0);
    glRotatef(-20, 1.0, 0.0, 0.0);
    glScalef(0.9, 3, 1.0);
    glutSolidCube(3.0);
  glPopMatrix();
}

void rightArm()
{
  glColor4f(0.0, 0.0, 0.8, 1.0); //right arm
  glPushMatrix();
    glTranslatef(8.0, -10.0, 0.0);
    glutSolidSphere(3.5, 10.0, 10.0);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(9.0, -13.0, 0.0);
    glRotatef(20, 0.0, 0.0, 1.0);
    glScalef(0.9, 2, 1.0);
    glutSolidCube(3.0);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(11.0, -17.0, 0.0);
    glutSolidSphere(2.5, 10.0, 10.0);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(11.0, -22.0, 2.0);
    glRotatef(-20, 1.0, 0.0, 0.0);
    glScalef(0.9, 3, 1.0);
    glutSolidCube(3.0);
  glPopMatrix();
}

void robotHead()
{
  glColor4f(1.0, 1.0, 1.0, 1.0); //head
  glPushMatrix();
    glScalef(0.9, 1.0, 0.8);
    glutSolidCube(10.0);
  glPopMatrix();

  glColor4f(0.0, 0.0, 1.0, 1.0); //left eyes
  glPushMatrix();
    glTranslatef(-2.5, 2.0, 4.0);
    glutSolidSphere(0.5, 10.0, 10.0);
  glPopMatrix();

  glColor4f(0.0, 0.0, 1.0, 1.0); //right eyes
  glPushMatrix();
    glTranslatef(2.5, 2.0, 4.0);
    glutSolidSphere(0.5, 10.0, 10.0);
  glPopMatrix();

  glColor4f(1.0, 0.0, 0.0, 1.0); //mouth
  glPushMatrix();
    glScalef(2.0, 1.0, 1.0);
    glTranslatef(0.0, -2.5, 4.0);
    glutSolidTorus(0.5, 0.75, 20, 20);
  glPopMatrix();

  glColor4f(0.0, 0.0, 0.0, 1.0); //nose
  glPushMatrix();
    glTranslatef(0.0, 0.0, 4.6);
    glutSolidOctahedron();
  glPopMatrix();
}

void robotBod()
{
  glTranslatef(rpx, rpy, rpz);
  robotHead();
  leftArm();
  rightArm();
  leftLeg();
  rightLeg();

  glColor4f(0.0, 1.0, 0.0, 1.0);
  glPushMatrix();
    glScalef(0.75, 0.8, 0.5);
    glTranslatef(0.0, -17.5, 0.0);
    glutSolidCube(20.0);
  glPopMatrix();
}
