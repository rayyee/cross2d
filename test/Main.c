//@author Ray Yee

#include <stdio.h>
#include <stdlib.h>
#include <GL/glew.h>

struct Vector3
{
	float x;
	float y;
	float z;
};

int main(int argc ,char* argv[])
{
	glutInit(&argc, argv);
	GLenum res = glewInit();
	if (res != GLEW_OK) 
	{ 
		printf(glewGetErrorString(res));
	}
	
	system("pause");
	
	return 0;
}