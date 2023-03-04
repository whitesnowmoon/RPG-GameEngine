#ifndef  _LISTENTASK_H
#define  _LISTENTASK_H

#include<glfw/glfw3.h>

class ListenTask
{
private:
    /* data */
public:
    ListenTask(/* args */);
    virtual ~ListenTask();
    virtual void doListen(GLFWwindow* window);
};


#endif