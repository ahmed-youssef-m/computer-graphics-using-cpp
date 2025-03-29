//#include <GL/freeglut.h>//it is a standard folder for all OpenGL-related header files.
//
//void display() {
//
//	glClearColor(0, 0, 0, 1);//sets the clear color for the color buffer (the background color of the window when it's cleared) as (red,green,blue,alpha(transparency)) each of them use  the range 0.0 -> 1.0.
//	glClear(GL_COLOR_BUFFER_BIT);//Clear the screen with the set color and clear the color buffer, which means resetting the color of all the pixels to a specific value (set by glClearColor()).
//
//	glBegin(GL_TRIANGLES);//Begins defining a primitive—in this case, a triangle. Subsequent glVertex calls specify the vertices of the triangle.
//
//	glColor3f(1.0, 0.0, 0.0);//sets the current color buffer as (red,green,blue) each of them use  the range 0.0 -> 1.0.
// 
//	glVertex3f(-0.5, -0.5, 0.0);//specifies a vertex in 3D space as (x,y,z(depth)) each of them use  the range -1.0 -> 1.0.
//	glVertex3f(0.5, -0.5, 0.0);
//	glVertex3f(0, 0.5, 0.0);
//
//	glEnd();//Ends the primitive definition started by glBegin.
//  
//	glFlush();//Ensures that all OpenGL commands are executed immediately. Particularly important when using single buffering (GLUT_SINGLE), as it forces rendering to the screen.
//}
//
//int main(int argc,char** argv) {//argc: The argument count, representing the number of command-line arguments passed to the program and argv: An array of strings (character pointers), where each string is a command-line argument.
//
//	glutInit(&argc, argv);//initializing the freeglut library.GLUT processes command-line arguments (like -display) through argc and argv.This sets up internal configurations for the toolkit.
//	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);//initializing the display memory type and display color model.
//
//	glutInitWindowPosition(600, 70);//the initializing the position of the window on the screen from the top-left corner as (x,y)=(0,0) pixels.
//	glutInitWindowSize(820, 430);//the initializing the size of the window using (width,hight) pixels.
//	glutCreateWindow("1st GL Lab");//Creates the window with the specified title.
//
//	glutDisplayFunc(display);//this function uses a callback function (callbackFunc) to handle rendering and this callback function will be called whenever the window needs to be redrawn and callback function should contain all rendering code.
//	glutMainLoop();//starting the main event loop of the GLUT library.It continuously listens for events(e.g., key presses, window resizes, etc.).It calls registered callback functions(like display) in response to these events.This function does not return until the program terminates.
//	
//
//	return 0;
//}