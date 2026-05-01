// Marvis Zivanai M241606 - HCS411 Part F: Jet Animation
#include <GL/glut.h>
float jetX = -1.2f;

void drawJet() {
    glColor3f(0.7f, 0.7f, 0.7f); // Silver
    // Jet Body - GL_TRIANGLES
    glBegin(GL_TRIANGLES);
        glVertex2f(jetX, 0.0f); 
        glVertex2f(jetX - 0.2f, 0.05f); 
        glVertex2f(jetX - 0.2f, -0.05f);
    glEnd();
    // Wings - GL_QUADS
    glBegin(GL_QUADS);
        glVertex2f(jetX - 0.15f, 0.0f); glVertex2f(jetX - 0.1f, 0.08f);
        glVertex2f(jetX - 0.05f, 0.08f); glVertex2f(jetX - 0.1f, 0.0f);
    glEnd();
    glBegin(GL_QUADS);
        glVertex2f(jetX - 0.15f, 0.0f); glVertex2f(jetX - 0.1f, -0.08f);
        glVertex2f(jetX - 0.05f, -0.08f); glVertex2f(jetX - 0.1f, 0.0f);
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    // Sky Background
    glColor3f(0.5f, 0.8f, 1.0f);
    glBegin(GL_QUADS);
        glVertex2f(-1.0f, -1.0f); glVertex2f(1.0f, -1.0f);
        glVertex2f(1.0f, 1.0f); glVertex2f(-1.0f, 1.0f);
    glEnd();
    drawJet();
    glFlush();
}

void timer(int value) {
    jetX += 0.02f;
    if(jetX > 1.2f) jetX = -1.2f; // Loop back
    glutPostRedisplay();
    glutTimerFunc(16, timer, 0); // 60 FPS
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Part F - Jet Flying - M241606");
    glutDisplayFunc(display);
    glutTimerFunc(25, timer, 0);
    glutMainLoop();
    return 0;
}
