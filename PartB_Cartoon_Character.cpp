// Marvis Zivanai M241606 - HCS411 Part B: 2D Cartoon [80 Marks]
#include <GL/glut.h>
#include <math.h>

void drawCircle(float cx, float cy, float r) {
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx, cy);
    for(int i = 0; i <= 20; i++) {
        float angle = 2.0f * 3.14159f * i / 20;
        glVertex2f(cx + cos(angle) * r, cy + sin(angle) * r);
    }
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // FAR PLANE - Sun
    glColor3f(1.0f, 1.0f, 0.0f);
    drawCircle(-0.7f, 0.7f, 0.15f);
    
    // FAR PLANE - Mountains
    glColor3f(0.5f, 0.35f, 0.05f);
    glBegin(GL_TRIANGLES);
        glVertex2f(-1.0f, -0.2f); glVertex2f(-0.3f, -0.2f); glVertex2f(-0.65f, 0.3f);
        glVertex2f(0.3f, -0.2f); glVertex2f(1.0f, -0.2f); glVertex2f(0.65f, 0.4f);
    glEnd();
    
    // NEAR PLANE - Your Cartoon Character
    // Head
    glColor3f(1.0f, 0.87f, 0.68f);
    drawCircle(0.0f, 0.1f, 0.2f);
    
    // Body
    glColor3f(0.0f, 0.0f, 1.0f);
    glBegin(GL_QUADS);
        glVertex2f(-0.15f, -0.1f); glVertex2f(0.15f, -0.1f);
        glVertex2f(0.15f, -0.5f); glVertex2f(-0.15f, -0.5f);
    glEnd();
    
    // Legs & Arms
    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(5.0);
    glBegin(GL_LINES);
        glVertex2f(-0.05f, -0.5f); glVertex2f(-0.05f, -0.8f);
        glVertex2f(0.05f, -0.5f); glVertex2f(0.05f, -0.8f);
        glVertex2f(-0.15f, -0.2f); glVertex2f(-0.3f, -0.4f);
        glVertex2f(0.15f, -0.2f); glVertex2f(0.3f, -0.4f);
    glEnd();
    
    // Eyes
    glPointSize(5.0);
    glBegin(GL_POINTS);
        glVertex2f(-0.07f, 0.15f); glVertex2f(0.07f, 0.15f);
    glEnd();
    
    // Smile
    glLineWidth(2.0);
    glBegin(GL_LINE_STRIP);
        glVertex2f(-0.08f, 0.0f); glVertex2f(0.0f, -0.05f); glVertex2f(0.08f, 0.0f);
    glEnd();
    
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Part B - Cartoon - M241606");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
