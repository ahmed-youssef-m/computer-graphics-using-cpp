//#include<GL/freeglut.h>
//
//void display() {
//
//	glClear(GL_COLOR_BUFFER_BIT);
//
//	glPointSize(7);//sets the diameter of rasterized points to n pixels in OpenGL.
//
//	glBegin(GL_POINTS);
//
//	glColor3f(0, 0, 1);
//	glVertex2f(0.5, 0.5);
//	glVertex2f(-0.5, -0.5);;
//	glVertex2f(0, 0);
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
//	glutCreateWindow("4th GL Lab");
//
//	glutDisplayFunc(display);
//	glutMainLoop();
//
//	return 0;
//}