//
// Created by vladyslav on 10.12.2020.
//
#ifndef L3_SPHERE_H
#define L3_SPHERE_H

#include <vector>
#include <GL/glew.h>
#include "shader.h"
#include "camera.h"
#include "sphere_behaviour.h"

class Sphere {
private:
    std::string texturePath;
    unsigned int texture;

    unsigned int VAO, VBO, EBO;

    Shader* shader;

    std::vector<float> vertices;
    std::vector<unsigned int> indices;

    unsigned int sector;
    unsigned int stack;
    float radius;

    static unsigned int index;
    static void indexUp();

public:
    Sphere(std::string, Shader*, unsigned int, unsigned int, float);
    void generateVertices();
    void generateIndices();
    void loadTexture();
    void bindAttributes();
    void draw(int, Camera*, int width, int height);

    Shader* getShader();
};


#endif //L3_SPHERE_H
