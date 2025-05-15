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

    cout << endl << "collision Analiz Start";

    mesh1.vertices[0].pos.print();
    mesh1.vertices[0].print();
    cout << mesh1.vertices[0].pos;

    return 0;
}