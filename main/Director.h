#ifndef _DIRECTOR_H
#define _DIRECTOR_H


#include<glad/glad.h>
#include<glfw/glfw3.h>
#include<list>
#include"Spirit.h"

class  Director
{
private:
    Spirit* root;
    GLFWwindow*window;
    void  palyRecursion(Spirit* spirit);
public:
    void play();
    explicit Director(GLFWwindow*window);
    ~ Director();
};



#endif
