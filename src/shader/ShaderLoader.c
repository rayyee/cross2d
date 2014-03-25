#include <GL/glew.h>

GLuint LoadFragmentShader(const char *fragment_file_path)
{
    //Create
    GLuint FragmentShaderID = glCreateShader(GL_FRAGMENT_SHADER);

	//Shader Source and Compile
	char const * FragmentSourcePointer = "out vec3 color;\nvoid main(void){\ncolor = vec3(1,0,0);\n}";
	glShaderSource(FragmentShaderID, 1, &FragmentSourcePointer , NULL);
    glCompileShader(FragmentShaderID);
	
	//Link the program
	GLuint ProgramID = glCreateProgram();
	glAttachShader(ProgramID, FragmentShaderID);
	glLinkProgram(ProgramID);

	//Delete
	glDeleteShader(FragmentShaderID);
	
	return ProgramID;
}