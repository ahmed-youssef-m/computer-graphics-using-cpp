//#include<GL/freeglut.h>
//
//void display() {
//
//	glClear(GL_COLOR_BUFFER_BIT);
//
//	glBegin(GL_TRIANGLES);
//
//	glColor3f(0, 0, 1);
//	glVertex2f(0.5,0.8);
//	glVertex2f(0.1,0.1);
//	glVertex2f(0.9,0.1);
//
//	glColor3f(1, 0, 0);
//	glVertex2f(-0.5, 0.8);
//	glVertex2f(-0.1, 0.1);
//	glVertex2f(-0.9, 0.1);
//
//	glColor3f(1, 1, 0);
//	glVertex2f(0.5, -0.8);
//	glVertex2f(0.1, -0.1);
//	glVertex2f(0.9, -0.1);
//
//	glColor3f(0, 1,0 );
//	glVertex2f(-0.5, -0.8);
//	glVertex2f(-0.1, -0.1);
//	glVertex2f(-0.9, -0.1);
//
//	glEnd();
//
//	glFlush();
//
//}
//
//int main(int argc, char** argv) {
//
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//
//	glutInitWindowPosition(600, 70);
//	glutInitWindowSize(820, 430);
//	glutCreateWindow("3rd GL Lab");
//
//	glutDisplayFunc(display);
//	glutMainLoop();
//
//	return 0;
//}