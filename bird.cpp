// bird.cpp
#include <GL/glut.h>
#include <cmath>
#include <vector>

// Bird structure to hold position, speed, and wing angle
struct Bird {
    float x, y;
    float speedX, speedY;
    float wingAngle;
    bool wingUp;
};

// Initialize 5 birds
std::vector<Bird> birds = {
    {0.0, 0.5, 0.0002, 0.0001, 0.0, true},
    {0.2, 0.6, 0.00015, 0.00012, 0.0, true},
    {-0.2, 0.7, 0.00025, 0.00008, 0.0, true},
    {0.4, 0.8, 0.00018, 0.0001, 0.0, true},
    {-0.4, 0.55, 0.00022, 0.00014, 0.0, true}
};

// Function to draw a bird at given coordinates with wing flapping
void drawBird(float x, float y, float wingAngle) {
    glColor3f(0.0, 0.0, 0.0); // Black color for body
    // Draw wings
    glPushMatrix();
    glTranslatef(x, y - 0.05, 0.0);

    // Left wing
    glPushMatrix();
    glRotatef(wingAngle, 0.0, 0.0, 1.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0, 0.0);
    glVertex2f(-0.03, 0.03);
    glVertex2f(-0.03, 0.0);
    glEnd();
    glPopMatrix();

    // Right wing
    glPushMatrix();
    glRotatef(-wingAngle, 0.0, 0.0, 1.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0, 0.0);
    glVertex2f(0.03, 0.03);
    glVertex2f(0.03, 0.0);
    glEnd();
    glPopMatrix();

    glPopMatrix();
}

// Function to update bird positions and wing angles
void updateBirdPositions() {
    for (auto& bird : birds) {
        bird.x += bird.speedX;
        bird.y += bird.speedY;

        // Change direction if the bird reaches the edge of the window
        if (bird.x > 1.0 || bird.x < -1.0) {
            bird.speedX = -bird.speedX;
        }
        if (bird.y > 1.0 || bird.y < -1.0) {
            bird.speedY = -bird.speedY;
        }

        // Update wing angle for flapping effect
        if (bird.wingUp) {
            bird.wingAngle += 1.0;
            if (bird.wingAngle > 20.0) {
                bird.wingUp = false;
            }
        } else {
            bird.wingAngle -= 1.0;
            if (bird.wingAngle < -20.0) {
                bird.wingUp = true;
            }
        }
    }
}
