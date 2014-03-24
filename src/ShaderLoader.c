#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <GL/glew.h>

GLuint LoadFragmentShader(const char *fragment_file_path)
{
    GLuint FragmentShaderID = glCreateShader(GL_FRAGMENT_SHADER);
	
	//Load fragment file
	//char *VertexSource;
	//char *line = NULL;
	//size_t len = 0;
    //FILE *in = fopen(fragment_file_path, "r");
	//getline(&line, &len, in);
	
	char const * FragmentSourcePointer = "out vec3 color;\nvoid main(void){\ncolor = vec4(1.,0.,1.,1.);\n}";
	glShaderSource(FragmentShaderID, 1, &FragmentSourcePointer , NULL);
    glCompileShader(FragmentShaderID);
	
	//Link the program
	GLuint ProgramID = glCreateProgram();
	glAttachShader(ProgramID, FragmentShaderID);
	glLinkProgram(ProgramID);
	
	glDeleteShader(FragmentShaderID);
	
	return ProgramID;
}