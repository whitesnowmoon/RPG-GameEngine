#include"Spirit.h"
#include"Texture.h"

Spirit::Spirit(Spirit * parent):
    parent(parent)
{
}

void Spirit::perform()
{
    control();
    paint();
}

void Spirit::paint()
{
    Texture t;
    glClearColor(0.1f, 0.9f, 0.1f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    t.layPicture("magic.png",0,0);

}

void Spirit::control()
{
    //if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
    //    glfwSetWindowShouldClose(window, true);
}

Spirit::~Spirit()
{
}