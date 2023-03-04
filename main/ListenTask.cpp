#include"ListenTask.h"

ListenTask::ListenTask(/* args */)
{
}

ListenTask::~ListenTask()
{
}

void ListenTask::doListen(GLFWwindow *window)
{
    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}
