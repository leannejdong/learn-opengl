cmake_minimum_required(VERSION 3.5)
project(hello-window)

find_package(glfw3 3.3 REQUIRED)
add_subdirectory(glad)

add_executable(tutorial hello.cpp)
target_link_libraries(
  tutorial PUBLIC
  glfw
  glad
  dl
)
