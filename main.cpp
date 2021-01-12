#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <iostream>

int main() {
  glfwInit();
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

  GLFWwindow* window = glfwCreateWindow(800, 600, "TestGLEW", NULL, NULL);
  if (window == NULL)
  {
      std::cout << "Failed to create window" << std::endl;
      glfwTerminate();
      return -1;
  }

  glViewport(0, 0, 800, 600);

  while(!glfwWindowShouldClose(window))
    {
      glfwSwapBuffers(window);
      glfwPollEvents();
    }

  //END
  glfwTerminate();
  return 0;
}
