#include<GL/glut.h>

void house(){
     //house
    glBegin(GL_POLYGON);
    glColor3f(75/255.0, 37/255.0, 26/255.0);
    glVertex2f(-0.7, -0.5);
    glVertex2f(-0.45, -0.3);
    glVertex2f(-0.45, -0.005);
    glVertex2f(-0.7, -0.205);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(90/255.0, 60/255.0, 40/255.0);
    glVertex2f(-0.9, -0.5);
    glVertex2f(-0.7, -0.5);
    glVertex2f(-0.7, -0.205);
    glVertex2f(-0.9, -0.205);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(80/255.0, 60/255.0, 40/255.0);
    glVertex2f(-0.9, -0.205);
    glVertex2f(-0.7, -0.205);
    glVertex2f(-0.8, -0.055);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3f(90/255.0, 60/255.0, 40/255.0);
    glVertex2f(-0.9, -0.5);
    glVertex2f(-0.7, -0.5);
    glVertex2f(-0.7, -0.205);
    glVertex2f(-0.9, -0.205);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(100/255.0, 60/255.0, 40/255.0);
    glVertex2f(-0.70, -0.205);
    glVertex2f(-0.45, -0.01);
    glVertex2f(-0.55, 0.110);
    glVertex2f(-0.8, -0.055);
    glEnd();

    //door 1
    glBegin(GL_POLYGON);
    glColor3f(0.529, 0.808, 0.922); 
    glVertex2f(-0.58, -0.40);
    glVertex2f(-0.58, -0.25);
    glVertex2f(-0.54, -0.22);
    glVertex2f(-0.54, -0.37);
    glEnd();

    //door 2
    glBegin(GL_POLYGON);
    glColor3f(0.529, 0.808, 0.922); 
    glVertex2f(-0.82, -0.5);
    glVertex2f(-0.78, -0.5);
    glVertex2f(-0.78, -0.35);
    glVertex2f(-0.82, -0.35);
    glEnd();

    //window 1
    glBegin(GL_POLYGON);
    glColor3f(0.529, 0.808, 0.922); 
    glVertex2f(-0.67, -0.32);
    glVertex2f(-0.67, -0.22);
    glVertex2f(-0.62, -0.18);
    glVertex2f(-0.62, -0.28);
    glEnd();

    //window 23
    glBegin(GL_POLYGON);
    glColor3f(0.529, 0.808, 0.922); 
    glVertex2f(-0.51, -0.2);
    glVertex2f(-0.51, -0.1);
    glVertex2f(-0.46, -0.06);
    glVertex2f(-0.46, -0.16 );
    glEnd();

}