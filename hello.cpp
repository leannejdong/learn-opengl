#include "glad/glad.h"
#include <GLFW/glfw3.h>
#include <iostream>

//int main() {
//  if (!glfwInit()) {
//    std::cout << "Error in initalizing glfw\n";
//    return -1;
//  }
//
//  GLFWwindow *window =
//      glfwCreateWindow(400, 400, "OpenGL Tutorial", NULL, NULL);
//
//  if (!window) {
//    std::cout << "Failed to create window\n";
//    glfwTerminate();
//    return -1;
//  }
//
//  glfwMakeContextCurrent(window);
////  if (!gladLoadGL()) {
////    std::cout << "Failed to initalize glad\n";
////    glfwDestroyWindow(window);
////    glfwTerminate();
////  }
////
//  std::cout << "Opengl Version\t" << GLVersion.major << "." << GLVersion.minor
//            << std::endl;
//
//  while (!glfwWindowShouldClose(window)) {
//    glfwSwapBuffers(window);
//    glfwPollEvents();
//  }
//  glfwDestroyWindow(window);
//  glfwTerminate();
//  return 0;
//}
  void framebuffer_size_callback(GLFWwindow* window, int width, int height);

int main()
{
  glfwInit();
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
  // Create window object
  GLFWwindow* window = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);
  if(window == NULL){
    std::cout << "Failed to create a GLFW window\n";
    glfwTerminate();
    return -1;
  }
  glfwMakeContextCurrent(window);
  // GLAD manage function ptrs for OpenGL so we initialize GLAD before calling any OpenGL function
  if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
  {
    std::cout << "Falied to initialize GLAD\n";
    return -1;

  }
  glViewport(0,0,800,600);
  glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
  while(!glfwWindowShouldClose(window))
  {
    glfwSwapBuffers(window);
    glfwPollEvents();
  }
  glfwTerminate();
  return 0;
}

void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    glViewport(0, 0, width, height);
} 
