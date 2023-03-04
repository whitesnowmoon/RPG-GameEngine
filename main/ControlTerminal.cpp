#include"ControlTerminal.h"

void ControlTerminal::doTasks()
{
    for (std::list<ListenTask>::iterator iter=this->tasks.begin();iter!=tasks.end();iter++)
    {
        iter->doListen(this->window);
    }
    
}

ControlTerminal::ControlTerminal(GLFWwindow *window) : window(window)
{
    
}

ControlTerminal::~ControlTerminal()
{
    
}