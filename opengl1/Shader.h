#ifndef SHADER_H
#define SHADER_H

#include <string>

class Shader {
public:
	Shader();
	Shader(const char* vertex_shader_path, const char* fragment_shader_path);

	void Use() const;

private:
	unsigned int shader_id;
	void CheckCompilerErrors(unsigned int shader, std::string type);
	void BuildShader(int, int);
	void LinkShader(int, int , int);
};
#endif