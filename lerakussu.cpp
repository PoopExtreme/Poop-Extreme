#include <glut.h>

void display();
void reshape(int,int);


//primitive x position
float x_pos = -10.0;
//animation state
int state = 1;

void init()
{
	//set background to black
	glClearColor(0.0,0.0,0.0,1.0);
}

int main(int argc,char**argv)
{
	glutInit(&argc,argv);
	//display modes
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	//window postion
	glutInitWindowPosition(200,100);
	//window size
	glutInitWindowSize(500,500);

	//create the initialized window with name
	glutCreateWindow ("Lerakussu");

	//initialize display function
	glutDisplayFunc(display);
	//initialize reshape function
	glutReshapeFunc(reshape);
	//initialize timer function

	init();

	//loop at the functions
	glutMainLoop();

}

void display()
{
	//clear color
	glClear(GL_COLOR_BUFFER_BIT);
	//clear transforms
	glLoadIdentity();


	glLineWidth(15);  //creating a square primitive at the far left
	glBegin(GL_LINES);

    glColor3f(0,1,2);
	glVertex2f(-5,5);
    glVertex2f(-5 ,-5);
    glVertex2f(-5.28,-5);
	glVertex2f(-1,-5);



    glBegin(GL_LINES);
    glColor3f(1,0 ,0);
    glVertex2f(0,5);
    glVertex2f(0 ,-5.3);
    glVertex2f(0,-5);
	glVertex2f(5,-5);


	//end of primitive drawing
	glEnd();

	//swapbuffer to be displayed
	glutSwapBuffers();
}

void reshape(int w, int h)
{
	glViewport(0,0,(GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	//size of the world
	gluOrtho2D(-10,10,-10,10);
	glMatrixMode(GL_MODELVIEW);
}
