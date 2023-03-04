/*
application类
用于控制主线程程序的开启初始化
*/


#ifndef _APPLICATION_H
#define _APPLICATION_H

#include<glad/glad.h>
#include<glfw/glfw3.h>
#include<iostream>

const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

class Application
{
public:
    Application(/* args */);
    ~Application();
    int run();
private:
   void framebuffer_size_callback(GLFWwindow* window, int width, int height) const;
};

#endif