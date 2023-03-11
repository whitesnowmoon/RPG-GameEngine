#include"Director.h"
#include"Spirit.h"
void Director::palyRecursion(Spirit *spirit)
{
    spirit->perform();
    for (std::list<Spirit*>::iterator i = spirit->childern.begin(); i !=spirit->childern.end(); i++)
    {
       (*i)->perform();
       palyRecursion(*i);
    }
    
}
void Director::play()
{
    palyRecursion(this->root);

}
Director::Director(GLFWwindow *window) : window(window)
{
    this->root=new Spirit(nullptr);

}

 Director::~ Director()
{
    
}
