//#include<GL/freeglut.h>
//
//
//float x_position = -10.0;//x-axis coordinate dynamic variable.
//int state = 1;//check if the rectangle is in right side (-1) or left side (1).
//
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
//	glColor3f(1, 1, 1);
//
//	glVertex2f(x_position, 1);//the order of the vertexes is a must and go counterclockwise.
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
//void timer(int ) {//(int) This is the user-defined parameter passed to the timer function that does not have name.
//	glutPostRedisplay();//This function tells GLUT to redraw the screen (i.e., call the display callback function that was registered by glutDisplayFunc()). It ensures the scene gets updated every time the timer function is called, making the animation continuous.
//	glutTimerFunc(1000 / 60, timer, 0);//Sets a timer to call the (timer) function again after a certain time interval (1000/60) 60 frames per second, creating a loop. (0) This is the user-defined parameter passed to the timer function. In this case, no specific value is needed, so it's 0.
//
//	switch (state)
//	{
//	case 1:
//		if (x_position <8)
//		{
//			x_position += 0.13;
//		}
//		else
//		{
//			state = -1;
//		}
//		break;
//	case -1:
//		if (x_position > -10)
//		{
//			x_position -= 0.13;
//		}
//		else
//		{
//			state = 1;
//		}
//		break;
//	}
//
//}
//int main(int argc, char** argv) {
//
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//
//	glutInitWindowPosition(600, 70);
//	glutInitWindowSize(820, 430);
//	glutCreateWindow("7th GL Lab");
//
//	glutDisplayFunc(display);
//	glutTimerFunc(0, timer, 0);
//	glutMainLoop();
//
//	return 0;
//}