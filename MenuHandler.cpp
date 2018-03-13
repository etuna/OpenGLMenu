

#include "MenuHandler.h"
#include "GL\freeglut.h"



void dm_solid() {
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glutPostRedisplay();
}
void dm_wireframes() {
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glutPostRedisplay();
}

void drawCube() {
	
}

void drawSphere() {
	
}


void drawCar() {
	
}

void drawTriangle() {
	
}


void drawCone() {
	
}


void subMenu_obj(int opt) {

	switch (opt) {

	case 0:
		drawCube();
		break;
	case 1:
		drawSphere();
		break;
	case 2:
		drawCar();
		break;
	case 3:
		drawTriangle();
		break;
	case 4:
		drawCone(); 
		break;
	}

}

void subMenu_drawing(int opt) {

	switch (opt) {
	case 0:
		dm_wireframes();
		break;
	case 1:
		dm_solid();
		break;
	}

}



void mainMenu(int a) {

}


void subMenu_color(int opt) {
	switch (opt) {
	case 0:
		
		break;
	case 1:
		
		
		break;
	case 2:
		
	
		break;
	case 3:
		
		break;
	case 4:
		
		break;
	case 5:
		
		break;
	}

}




MenuHandler::MenuHandler() {

	
	int obj_type = glutCreateMenu(subMenu_obj);
	glutAddMenuEntry("Cube", 0);
	glutAddMenuEntry("Sphere", 1);
	glutAddMenuEntry("Car", 2);
	glutAddMenuEntry("Triangle", 3);
	glutAddMenuEntry("Cone", 4);


	int drawing_mode = glutCreateMenu(subMenu_drawing);
	glutAddMenuEntry("wireframe", 0);
	glutAddMenuEntry("solid", 1);

	int color = glutCreateMenu(subMenu_color);
	glutAddMenuEntry("red", 0);
	glutAddMenuEntry("yellow", 1);
	glutAddMenuEntry("green", 2);
	glutAddMenuEntry("blue", 3);
	glutAddMenuEntry("magenta", 4);
	glutAddMenuEntry("black", 5);

	glutCreateMenu(mainMenu);
	glutAddSubMenu("OBJECT TYPE", obj_type);
	glutAddSubMenu("DRAWING MODE", drawing_mode);
	glutAddSubMenu("COLOR", color);

	glutAttachMenu(GLUT_RIGHT_BUTTON);



}

MenuHandler::~MenuHandler() {

}




