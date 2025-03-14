#include "mesh.hpp"
#include "obj.hpp"
#include "SAT.hpp"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    Mesh mesh1;
    Mesh mesh2;

    LoadOBJ(argv[0], Mesh* mesh1);
    LoadOBJ(argv[1], Mesh* mesh2);

    cout << IsSATCollision(mesh1.verticles, mesh2.verticles);

    return 0;
}