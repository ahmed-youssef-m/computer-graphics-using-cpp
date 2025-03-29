//#include<GL/freeglut.h>
//
//void display() {
//
//	glClearColor(0, 0, 0, 1);
//	glClear(GL_COLOR_BUFFER_BIT);
//
//	glMatrixMode(GL_PROJECTION);// Set matrix mode to projection
//	glLoadIdentity();//resets the current matrix (in this case, the Projection Matrix) to the identity matrix.
//	gluOrtho2D(-10, 10, -10, 10);// Define a 2D orthographic projection
//
//	glBegin(GL_QUADS);//Specifies that we are drawing quadrilaterals.
//
//	glColor3f(1, 1, 1);
//
//	glVertex2f(2.0, 2.0);//the order of the vertexes is a must and go counterclockwise.
//	glVertex2f(-2.0, 2.0);
//	glVertex2f(-2.0, -2.0);
//	glVertex2f(2.0, -2.0);
//
//	glEnd();
//
//	glFlush();//Ensures all OpenGL commands are executed immediately.
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
//	glutCreateWindow("6th GL Lab");
//
//	glutDisplayFunc(display);
//	glutMainLoop();//Starts the GLUT event processing loop and displays the content.
//
//	return 0;
//}