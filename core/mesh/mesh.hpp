// RU
// Заголовочный файл mesh. Описывает класс хранения 3d моделей.
// Возможно дополнение в виде функций по ходу разработки.

// EN
// Header file mesh. Describes the storage class for 3D models.
// It is possible to add functions as development progresses.

#pragma once

#include <vector>

using namespace std;

//RU Структура вектора.
//EN Vector structure.

struct Vec3D {
protected:
    float x, y, z;
public:
    Vec3D(){}
    Vec3D(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
    ~Vec3D(){}

    float getX() const{return x;}
    float getY() const{return y;}
    float getZ() const{return z;}

    void setX(float _x){x=_x;}
    void setY(float _y){y=_y;}
    void setZ(float _z){z=_z;}

    Vec3D operator+(Vec3D const & vec) const;
    Vec3D operator-(Vec3D const & vec) const;
    float operator*(Vec3D const & vec) const;
    Vec3D operator*(float scalar) const;
    
    float len();
    void print();
};

ostream& operator<<(ostream& stream, const Vec3D& vec);

//RU Структура точки
//EN Vertex structure

struct Vertex {
public:
    Vec3D pos;

    Vertex() :  pos() {}
    Vertex(float _x, float _y, float _z) : pos (_x, _y, _z) {}
    ~Vertex(){}

    Vec3D GetPosition()const{return pos;}
    void SetPosition(Vec3D vec){pos.setX(vec.getX()); pos.setY(vec.getY()); pos.setZ(vec.getZ());}
    void SetPosition(float x, float y, float z){pos.setX(x); pos.setY(y); pos.setZ(z);}
};

//RU Структура Normal
//EN Normal structure

struct Normal{
protected:
    Vec3D normal;
public:
    Normal() : normal() {}
    Normal(float _x, float _y, float _z) : normal(_x, _y, _z) {}
    ~Normal(){}

    Vec3D GetNormal(){return normal;}
    void SetNormal(Vec3D vec){normal.setX(vec.getX()); normal.setY(vec.getY()); normal.setZ(vec.getZ());}
    void SetNormal(float x, float y, float z){normal.setX(x); normal.setY(y); normal.setZ(z);}
};

//RU Структура Mesh
//EN Mesh structure

struct Mesh {
public:
    vector <Vertex> vertices;
    vector <Normal> normals;

    Mesh() {}
    ~Mesh() {}
};

//RU вспомогательные функции 
//EN support functions

float projection(Vec3D a, Vec3D b);