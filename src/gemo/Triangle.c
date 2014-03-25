#include <GL/glew.h>

GLuint vertexbuffer;

static const GLfloat g_vertex_buffer_data[] = {
   -1.0f, -1.0f, 0.0f,
   1.0f, -1.0f, 0.0f,
   0.0f, 1.0f, 0.0f,
};

void
Triangle_createVertex()
{
    //print("triangle create");
    //生成1个名称给vertexbuffer缓冲区对象
    glGenBuffers(1, &vertexbuffer);
    //激活缓冲区对象
    glBindBuffer(GL_ARRAY_BUFFER, vertexbuffer);
    //数据填充给缓冲区对象，并初始化缓冲区对象
    glBufferData(GL_ARRAY_BUFFER, sizeof(g_vertex_buffer_data), g_vertex_buffer_data, GL_STATIC_DRAW);
}

void
Triangle_createConfigure(char attribute)
{
    //print("triangle configure");
    glEnableVertexAttribArray(attribute);
    //激活缓冲区对象
	glBindBuffer(GL_ARRAY_BUFFER, vertexbuffer);
	glVertexAttribPointer(
	   attribute,          // /* The attribute location */
	   3,                  // /* How many elements; XYZ in this case, so 3. */
	   GL_FLOAT,           // /* The variable type. */
	   GL_FALSE,           // /* Do not normalize the data. */
	   0,                  // /* The stride in bytes of the array delimiting the elements, in this case none. */
	   (void*)0            // /* The vertex position array pointer. */
	);
}