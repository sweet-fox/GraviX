#include <iostream>
#include <vector>
#include <cmath>
#include "core\mesh\mesh.hpp"
#include "mesh.hpp"

using namespace std;

/*----------------Vec3D----------------*/

Vec3D Vec3D::operator+(Vec3D const &vec) const{
        Vec3D res;
        res.x = x + vec.x;
        res.y = y + vec.y;
        res.z = z + vec.z;
        return res;
}

Vec3D Vec3D::operator-(Vec3D const &vec) const{
        Vec3D res;
        res.x = x - vec.x;
        res.y = y - vec.y;
        res.z = z - vec.z;
        return res;
}

float Vec3D::operator*(Vec3D const &vec) const{
        return (x*vec.x + y*vec.y + z*vec.z);
}

Vec3D Vec3D::operator*(float scalar) const{
        Vec3D res;
        res.x = x * scalar;
        res.y = y * scalar;
        res.z = z * scalar;
        return res;
}

ostream& operator<<(ostream& stream, const Vec3D& vec){
    stream << "Value: " << "X (" << vec.getX() << ") Y(" << vec.getY() << ") Z(" << vec.getZ() << ")";
    return stream;
}

float Vec3D::len(){
    return (pow((pow(x, 2)+pow(y, 2)+pow(z, 2)),0.5));
}

void Vec3D::print(){
    cout << endl << "X(" << x << ") Y(" << y << ") Z(" << z << ")" << endl;
}

//Vertex

void Vertex::print(){
        cout << "Vec3D is:";
        pos.print();
}