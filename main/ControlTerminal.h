#ifndef _CONTROLTERMINAL_H
#define _CONTROLTERMINAL_H

#include<glad/glad.h>
#include<glfw/glfw3.h>
#include<list>
#include"ListenTask.h"

class ControlTerminal
{
private:
    std::list<ListenTask> tasks;
public:
    GLFWwindow* window;
    void doTasks();
    explicit ControlTerminal(GLFWwindow* window);
    ~ControlTerminal();
};




#endif