#include<GL/glut.h>
#include<cmath>
void tree(float x1, float x2){
    
    glBegin(GL_POLYGON);
    glColor3f(0.545, 0.271, 0.075);
    // glVertex2f(-0.87, -0.75);
    // glVertex2f(-0.81, -0.75);
    // glVertex2f(-0.81, -0.6);
    // glVertex2f(-0.87, -0.6);
    glVertex2f(x1, x2);
    glVertex2f(x1+0.06, x2);
    glVertex2f(x1+0.06, x2+0.15);
    glVertex2f(x1, x2+0.15);
    glEnd();

    glColor3f(0.0, 0.6, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1+0.035, x2+0.25);
    float radius = 0.12;
    for (int i = 0; i <= 100; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(100);
        float dx = radius * cosf(theta); 
        float dy = radius * sinf(theta); 
        glVertex2f(x1 + 0.035+ dx, x2+0.25 + dy); 
    }
    glEnd();
}