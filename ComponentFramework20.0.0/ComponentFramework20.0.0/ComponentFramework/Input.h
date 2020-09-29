#ifndef INPUT_H
#define INPUT_H


#include <GLFW/glfw3.h>
class Input
{
public:
	//glfwSetKeyCallback(window,key_callback);
	static void key_callback(int key, int scancode, int action, int mods, float x);
	Input();
	~Input();
}; 
#endif // !INPUT_H

