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
//	glShadeModel(GL_FLAT);//glShadeModel(GL_FLAT) sets the shading model to flat shading. In flat shading, the color of an entire primitive (e.g., a polygon) is determined by the color of one of its vertices. The other vertices' colors are ignored.For polygons, OpenGL typically uses the first vertex specified to determine the color.
//
//	glBegin(GL_POLYGON);
//
//	glColor3f(1, 0, 0);
//	glVertex2f(x_position, 1);
//
//	glColor3f(0, 1, 0);
//	glVertex2f(x_position, -1);
//
//	glColor3f(0, 0, 1);
//	glVertex2f(x_position + 2, -1);
//
//	glColor3f(1, 1, 1);
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
//	glutCreateWindow("9th GL Lab");
//
//	glutDisplayFunc(display);
//	glutMainLoop();
//
//	return 0;
//}