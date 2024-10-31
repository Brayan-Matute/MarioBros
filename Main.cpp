#include <Gl/glut.h>
#include <iostream>
#include "main.h"
#include "variables.h"
#include "graphics.h"
#include "piso.h"
#include "mario.h"

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    // Posiciona la c mara
    gluLookAt(cx1, 0.0, 20,  // Posici n de la c mara (x, y, z)
        cx1, 0.0, 0.0,  // Punto de mira (centro de la escena)
        0.0, 1.0, 0.0); // Vector de orientaci n (eje vertical)



    // Dibuja un cubo
    matriz_Base();
    //flame(20, 20);
    charma(0, -3);
    //bomber(-6, -3);

    piso();



    glutSwapBuffers();
}



void reshape(int width, int height) {
    glViewport(0, 0, (GLsizei)width, (GLsizei)height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0f, (GLfloat)width / (GLfloat)height, 0.1f, 100.0f);
    glMatrixMode(GL_MODELVIEW);
}

void timer(int value) {
    angle += 0.5f;
    zoom += 0.1f;
    if (angle > 360) {
        angle -= 360;
    }
    glutPostRedisplay();
    glutTimerFunc(16, timer, 0); // Aproximadamente 60 FPS
}

void key(unsigned char key, int x, int y) {
    switch (key) {

    case 'a':
        cx1 += -0.1f;
        glutPostRedisplay();
        break;
    case 'd':
        cx1 += 0.1f;
        glutPostRedisplay();
        break;
    case 'w':
        cx1 += 5.0f;
        glutPostRedisplay();
        cx1 += -2.0f;
        glutPostRedisplay();
        break;


    }

}

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0); // Color de fondo negro
    glEnable(GL_DEPTH_TEST); // Habilita el buffer de profundidad
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("OpenGL - 2D ESTUDIO");

    init();

    glutMotionFunc(motionCallback);
    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    glutReshapeFunc(reshape);
    glutTimerFunc(0, timer, 0);

    glutMainLoop();
    return 0;
}
