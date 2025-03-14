//RU
// Эта функция считывает и сохраняет mesh, НО только выпуклых обьектов.
// В ней предусмотренно чтобы считывать и другие данные, но пока этого не нужно.

//EN
// This function reads and saves mesh, BUT only convex objects.
// It is provided to read other data, but for now this is not needed.

#include <iostream>
#include <mesh.hpp>
#include "obj.hpp"
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

bool LoadOBJ (const string filename, Mesh* Mesh) {
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "ERROR: Failed to open file!";
        return 0;
    }

    string line;
    while (getline(file,line)){
        istringstream Line (line);
        string param;
        Line >> param;

        float x, y, z;

        if(param == "v"){
            Line >> x >> y >> z;
            (*Mesh).vertices.push_back(Vertex(x,y,z));
        }
        //else if(param == "vt"){}
        //else if(param == "vn"){}
        //else if(param == "vt"){}
    }  
}
