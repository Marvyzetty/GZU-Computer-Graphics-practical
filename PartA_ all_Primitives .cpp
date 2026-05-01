// Marvis Zivanai M241606 - HCS411 Part A: All OpenGL Primitives [20 Marks]
#include <GL/glut.h>
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    // GL_POINTS
    glPointSize(5.0);
    glBegin(GL_POINTS);
        glVertex2f(-0.8f, 0.8f);
        glVertex2f(-0.6f, 0.8f);
    glEnd();
    // GL_LINES
    glBegin(GL_LINES);
        glVertex2f(-0.4f, 0.8f); glVertex2f(-0.2f, 0.6f);
    glEnd();
    // GL_LINE_STRIP
    glBegin(GL_LINE_STRIP);
        glVertex2f(0.0f, 0.8f); glVertex2f(0.2f, 0.6f); glVertex2f(0.4f, 0.8f);
    glEnd();
    // GL_LINE_LOOP
    glBegin(GL_LINE_LOOP);
        glVertex2f(0.6f, 0.8f); glVertex2f(0.8f, 0.6f); glVertex2f(0.6f, 0.4f);
    glEnd();
    // GL_TRIANGLES
    glBegin(GL_TRIANGLES);
        glVertex2f(-0.8f, 0.2f); glVertex2f(-0.6f, -0.2f); glVertex2f(-0.4f, 0.2f);
    glEnd();
    // GL_TRIANGLE_STRIP
    glBegin(GL_TRIANGLE_STRIP);
        glVertex2f(-0.2f, 0.2f); glVertex2f(0.0f, -0.2f); glVertex2f(0.2f, 0.2f); glVertex2f(0.4f, -0.2f);
    glEnd();
    // GL_TRIANGLE_FAN
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(0.7f, 0.0f); glVertex2f(0.6f, 0.2f); glVertex2f(0.8f, 0.2f); glVertex2f(0.9f, 0.0f);
    glEnd();
    // GL_QUADS
    glBegin(GL_QUADS);
        glVertex2f(-0.8f, -0.4f); glVertex2f(-0.6f, -0.4f); glVertex2f(-0.6f, -0.8f); glVertex2f(-0.8f, -0.8f);
    glEnd();
    // GL_QUAD_STRIP
    glBegin(GL_QUAD_STRIP);
        glVertex2f(-0.4f, -0.4f); glVertex2f(-0.4f, -0.8f); glVertex2f(-0.2f, -0.4f); glVertex2f(-0.2f, -0.8f);
    glEnd();
    // GL_POLYGON
    glBegin(GL_POLYGON);
        glVertex2f(0.2f, -0.4f); glVertex2f(0.4f, -0.3f); glVertex2f(0.5f, -0.6f); glVertex2f(0.3f, -0.8f); glVertex2f(0.1f, -0.6f);
    glEnd();
    glFlush();
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Part A - All Primitives - M241606");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
