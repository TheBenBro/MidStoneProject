#include "Input.h"

void Input::key_callback(int key, int scancode, int action, int mods, float x)
{
	x = 0.0f;
	if (key == GLFW_KEY_E && action == GLFW_PRESS) {
		x += 0.1;
	}
}

Input::Input()
{
}

Input::~Input()
{
}
