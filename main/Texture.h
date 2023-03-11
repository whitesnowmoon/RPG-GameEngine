#ifndef _TEXTURE_H
#define _TEXTURE_H

#define STB_IMAGE_IMPLEMENTATION
#include<iostream>
#include<glad/glad.h>
#include<glfw/glfw3.h>
#include"stb_image.h"
#include"Shader.h"

class Texture
{
private:
    /* data */
public:
    void layPicture(std::string img,int x,int y);
    Texture(/* args */);
    ~Texture();
   
};

#endif