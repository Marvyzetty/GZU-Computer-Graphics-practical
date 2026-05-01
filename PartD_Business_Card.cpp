// Marvis Zivanai M241606 - HCS411 Part D: Business Card [20 Marks]
#include <GL/glut.h>
#include <string.h>

void drawText(float x, float y, const char* text) {
    glRasterPos2f(x, y);
    for (int i = 0; i < strlen(text); i++) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Card Background - GL_QUADS
    glColor3f(0.9f, 0.9f, 1.0f); // Light blue
    glBegin(GL_QUADS);
        glVertex2f(-0.8f, -0.4f); glVertex2f(0.8f, -0.4f);
        glVertex2f(0.8f, 0.4f); glVertex2f(-0.8f, 0.4f);
    glEnd();
    
    // Border - GL_LINE_LOOP
    glColor3f(0.0f, 0.0f, 0.5f); // Dark blue
    glLineWidth(3.0);
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.8f, -0.4f); glVertex2f(0.8f, -0.4f);
        glVertex2f(0.8f, 0.4f); glVertex2f(-0.8f, 0.4f);
    glEnd();
    
    // Logo - GL_TRIANGLE_FAN for circle
    glColor3f(0.0f, 0.4f, 0.8f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(-0.6f, 0.0f);
        for(int i = 0; i <= 20; i++) {
            float angle = 2.0f * 3.14159f * i / 20;
            glVertex2f(-0.6f + cos(angle) * 0.1f, 0.0f + sin(angle) * 0.1f);
        }
    glEnd();
    
    // Text Details
    glColor3f(0.0f, 0.0f, 0.0f); // Black text
    drawText(-0.3f, 0.2f, "Marvis Zivanai");
    drawText(-0.3f, 0.0f, "M241606");
    drawText(-0.3f, -0.2f, "Computer Graphics Developer");
    drawText(-0.3f, -0.35f, "HCS411 - GZU 2026");
    
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Part D - Business Card - M241606");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
