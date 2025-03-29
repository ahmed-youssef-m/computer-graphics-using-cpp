//#include<GL/freeglut.h>
//
//float x_position = -10.0;
//
//void display() {
//
//	glClearColor(0, 0, 0, 1);
//	glClear(GL_COLOR_BUFFER_BIT);
//
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluOrtho2D(-10, 10, -10, 10);
//
//	glBegin(GL_POLYGON);
//
//	glColor3f(1, 0, 0);
//	glVertex2f(x_position, 1);
//	glVertex2f(x_position, -1);
//	glVertex2f(x_position + 2, -1);
//	glVertex2f(x_position + 2, 1);
//
//	glEnd();
//
//	glTranslatef(4, 5, 0); // Translation of 4 units on both x and y axes.
//
//	glBegin(GL_POLYGON);
//
//	glColor3f(1, 0, 0);
//	glVertex2f(x_position, 1);
//	glVertex2f(x_position, -1);
//	glVertex2f(x_position + 2, -1);
//	glVertex2f(x_position + 2, 1);
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
//	glutCreateWindow("10th GL Lab");
//
//	glutDisplayFunc(display);// Register the display function.
//	glutMainLoop();// Start the event loop.
//
//	return 0;
//}