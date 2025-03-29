//#include<GL/freeglut.h>
//
//void display() {
//
//	glClearColor(1, 1, 0,1);
//	glClear(GL_COLOR_BUFFER_BIT);
//
//	glBegin(GL_LINES);
//
//	glColor3f(1, 0, 0);
//	glVertex2f(0.5, 0.2);
//	glVertex2f(-0.5, -0.5);;
//
//	glColor3f(0, 1, 0);
//	glVertex2f(-0.5, 0.0);
//	glVertex2f(0.5, 0.7);;
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
//	glutCreateWindow("5th GL Lab");
//
//	glutDisplayFunc(display);
//	glutMainLoop();
//
//	return 0;
//}