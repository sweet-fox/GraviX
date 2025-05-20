#include "physics/collide/algorithms/SAT/SAT.hpp"
#include "read/obj.hpp"
#include "core/mesh/mesh.hpp"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

    Mesh mesh1;
    Mesh mesh2;

    cout << argv[1] << endl << argv[2] << endl;

    LoadOBJ(argv[1], mesh1);
    LoadOBJ(argv[2], mesh2);

    cout << mesh1.vertices[0].pos;
    cout << mesh1.vertices[1].pos;
    cout << projection(mesh1.vertices[0].GetPosition(), mesh1.normals[0].GetNormal()) << endl;

    if(IsSATCollision(mesh1,mesh2)){
        cout << "is col";
    }
    else{
        cout << "no col";
    }

    return 0;
}