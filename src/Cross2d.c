#include "Triangle.h"

#include <GL/glew.h>

typedef struct Geometry
{
    void (*createVertex)();
    void (*createConfigure)(char);
} Geometry;

Geometry geometries[2];
Geometry triangle;

void
Cross2d_initialize()
{
    triangle.createVertex = Triangle_createVertex;
    triangle.createConfigure = Triangle_createConfigure;
    triangle.createVertex();
}

Cross2d_update()
{
    GLuint programID = LoadFragmentShader( "simple.fs" );

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glUseProgram(programID);

	triangle.createConfigure(0);

	glDrawArrays(GL_TRIANGLES, 0, 3);

    glDisableVertexAttribArray(0);
}