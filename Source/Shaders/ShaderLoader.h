#ifndef SHADER_LOADER_H_INCLUDED
#define SHADER_LOADER_H_INCLUDED

#include <GL/gl3w.h>
#include <string>

GLuint loadShader (const std::string& vertexShaderFile, const std::string& fragmentShaderFile);

#endif // SHADER_LOADER_H_INCLUDED
