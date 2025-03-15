#include "collide/algorithms/SAT/SAT.hpp"
#include "read/obj.hpp"
#include "mesh/mesh.hpp"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

    Mesh mesh1;
    Mesh mesh2;

    cout << argv[1] << endl << argv[2] << endl;

    LoadOBJ(argv[1], mesh1);
    LoadOBJ(argv[2], mesh2);

    if (IsSATCollision(mesh1, mesh2)){
        cout << "have collision";
    }
    else{
        cout << "not have collision";
    }

    return 0;
}