#ifndef _SPIRIT_H
#define _SPIRIT_H

class Director;
#include<glad/glad.h>
#include<glfw/glfw3.h>
#include<list>

class Spirit
{
    friend class Director;
private:
    Spirit* parent=nullptr;
    std::list<Spirit*> childern;
    void perform();
public:
    explicit Spirit(Spirit* parent);
    int addSpirit(Spirit* spirit);
    int removeSpirit(Spirit* spirit);
    virtual void paint();
    virtual void control();
    virtual ~Spirit();
};




#endif