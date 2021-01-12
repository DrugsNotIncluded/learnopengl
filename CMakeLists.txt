cmake_minimum_required(VERSION 3.10)
project(learnGLFW)
add_executable(learnGLFW main.cpp)


find_package(glfw3 3.3 REQUIRED)
target_link_libraries(learnGLFW glfw)
find_package(OpenGL REQUIRED)
target_link_libraries(learnGLFW OpenGL::GL)
