//#include<GL/freeglut.h>
//
//using namespace std;
//
//void dispaly() {
//
//	glClearColor(0.0, 0.0, 0.0, 0.0);
//	glClear(GL_COLOR_BUFFER_BIT);
//
//	glBegin(GL_TRIANGLES);
//
//	glColor3f(1.0, 0.0, 0.0);
//	glVertex2f(0.0, 0.5);
//
//	glColor3f(0.0, 1.0, 0.0);
//	glVertex2f(0.5, -0.5);
//
//	glColor3f(0.0, 0.0, 1.0);
//	glVertex2f(-0.5, -0.5);
//
//	glEnd();
//
//	glFlush();
//}
//
//int main(int argc, char** argv) {
//
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//
//	glutInitWindowPosition(600, 70);
//	glutInitWindowSize(820, 430);
//	glutCreateWindow("2nd GL Lab");
//
//	glutDisplayFunc(dispaly);
//	glutMainLoop();
//
//	return 0;
//}