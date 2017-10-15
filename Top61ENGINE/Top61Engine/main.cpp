#include <iostream>

#include <glfw3.h>
#include "src\graphics\window.h"

using namespace graphics;

int main() 
{
	Window mainWindow("Main", 800, 600);
	glClearColor(0.2f, 0.3f, 0.8f, 1.0f);
	while (!mainWindow.Closed())
	{
		mainWindow.Clear();
		mainWindow.Update();
	}
	return 0;
}