// RU
// Заголовочный файл mesh. Описывает класс хранения 3d моделей.
// Возможно дополнение в виде функций по ходу разработки.

// EN
// Header file mesh. Describes the storage class for 3D models.
// It is possible to add functions as development progresses.

#include <iostream>
#include <vector>

using namespace std;

//RU Структура вектора.
//EN Vector structure.

struct Vec3D {
    float x, y, z;
    Vec3D() : x(0.0), y(0.0), z(0.0) {}
    Vec3D(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
};


//RU Структура точки
//EN Vertex structure

struct Vertex : public Vec3D {
    Vec3D pos;
    Vertex() :  Vec3D() {}
    Vertex(float _x, float _y, float _z) : 
           pos (_x, _y, _z) {}
};

//RU Структура Face
//EN Face structure

//RU Структура Mesh
//EN Mesh structure

struct Mesh {
    vector <Vertex> vertices;
};
