#include<GL/glut.h>
#include<iostream>

void surrounding(){
    glBegin(GL_POLYGON);
    glColor3f(0.5f,0.5f, 0.5f);
    glVertex2f(-0.58, -0.40);
    glVertex2f(-0.54, -0.37);
    glVertex2f(1, -0.37);
    glVertex2f(1, -0.40);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(139/255.0, 69/255.0, 19/255.0);
    glVertex2f(-0.7, -0.6);
    glVertex2f(-0.6, -0.5);
    glVertex2f(-0.2, -0.5);
    glVertex2f(-0.1, -0.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(139/255.0, 69/255.0, 19/255.0);
    glVertex2f(-0.4, -0.3);
    glVertex2f(-0.3, -0.2);
    glVertex2f(-0.0, -0.2);
    glVertex2f(0.1, -0.3);
    glEnd();

    glLineWidth(5.0);

    glBegin(GL_LINES);
    float x11= 0.0,x12 = -1.0,y11 = -0.7,y12= -0.7;
    for(int i=0;i<=1;i++){
        glVertex2f(x11, y11);
        glVertex2f(x12, y12);
        
        y11 -= 0.05 ,y12 -= 0.05;
    }
    glEnd();

    glBegin(GL_LINES);
    float x21 = -1, x22=-0.9 , y21 = -0.4, y22=-0.25;
    for(int i=0;i<=1;i++){
        glVertex2f(x21, y21);
        glVertex2f(x22, y22);
        
        y21 -= 0.05 ,y22 -= 0.05;
    }
    glEnd();

    glBegin(GL_LINES);
    float x31= 0.2, x32= -0.45, y31 = -0.05, y32 =-0.05;
    for(int i=0; i<=1;i++){
        glVertex2f(x31, y31);
        glVertex2f(x32, y32);
    
        y31 -= 0.05, y32-= 0.05;
    }
    glEnd();

    glBegin(GL_LINES);
    float x41= 0.2, x42= 0.135, y41 =  -0.05, y42 =-0.25;
    for(int i=0; i<=1;i++){
        glVertex2f(x41, y41);
        glVertex2f(x42, y42);

        y41 -= 0.05, y42-= 0.05;
    }
    glEnd();

    glBegin(GL_LINES);
    float x51= 0.10, x52= 0, y51 = -0.36, y52 =-0.7;
    for(int i=0; i<=1;i++){
        for(int j=0;j<2;j++){
        glVertex2f(x51, y51);
        glVertex2f(x52, y52);
        }
        y51 -= 0.05, y52-= 0.05;
    }
    glEnd();

    glBegin(GL_LINES);
    float x61= 0.0, x62= 0.0, y61 = -0.8, y62 =-0.7;
    for(int i=0; i<=10;i++){
        for(int j=0;j<2;j++){
        glVertex2f(x61, y61);
        glVertex2f(x62, y62);

        }
        x61 -= 0.1, x62-= 0.1;
    }
    glEnd();

    glBegin(GL_LINES);
    float x71= 0.0, x72= 0.0, y71 = -0.8, y72 =-0.7;
    for(int i=0; i<=3;i++){
        for(int j=0;j<2;j++){
        glVertex2f(x71, y71);
        glVertex2f(x72, y72);

        }
        x71 += 0.0321, x72+= 0.0321;
        y71+=0.11, y72+=0.11;
    }
    glEnd();

    glBegin(GL_LINES);
    float x81= 0.14, x82= 0.14, y81 = -0.34, y82 =-0.24;
    for(int i=0; i<=2;i++){
        for(int j=0;j<2;j++){
        glVertex2f(x81, y81);
        glVertex2f(x82, y82);

        }
        x81 += 0.03, x82+= 0.03;
        y81+=0.1, y82+=0.1;
    }
    glEnd();

    glBegin(GL_LINES);
    float x91= 0.2, x92= 0.2, y91 = -0.05, y92 =-0.15;
    for(int i=0; i<=6;i++){
        glVertex2f(x91, y91);
        glVertex2f(x92, y92);
        x91 -= 0.1, x92-= 0.1;
    }
    glEnd();
    
    glBegin(GL_LINES);
    float x1  = -1.0, x2 = -1.0, y1 = -0.4, y2= -0.5;
    for (int i=0;i<4;i++){
        glVertex2f(x1,y1);
        glVertex2f(x2, y2);
    
    x1 += 0.03, x2 += 0.03;
    y1+=0.05, y2+=0.05;
    }
    glEnd();

}