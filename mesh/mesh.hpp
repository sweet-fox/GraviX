// RU
// Заголовочный файл mesh. Описывает класс хранения 3d моделей.
// Возможно дополнение в виде функций по ходу разработки.

// EN
// Header file mesh. Describes the storage class for 3D models.
// It is possible to add functions as development progresses.
#pragma once

#include <iostream>
#include <vector>

using namespace std;

//RU Структура вектора.
//EN Vector structure.

struct Vec3D {
    float x, y, z;
    Vec3D(){}
    Vec3D(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
};


//RU Структура точки
//EN Vertex structure

struct Vertex {
    Vec3D pos;
    Vertex() :  pos() {}
    Vertex(float _x, float _y, float _z) : pos (_x, _y, _z) {}
};

//RU Структура Mesh
//EN Mesh structure

struct Mesh {
    vector <Vertex> vertices;
    Mesh() {}
};
