/*-------------------- <Sat.cpp> - <Sat algorithm file> ---------------------*\
| Part of the Physics Engine, under the MIT License.                          |
| SPDX-License-Identifier: MIT                                                |
\*---------------------------------------------------------------------------*/

/*------------------------------- Description -------------------------------*\
| This file contains the main function of the SAT collision algorithm.        |                                              |
\*---------------------------------------------------------------------------*/

#include <vector>
#include <iostream>
#include "physics/collide/algorithms/SAT/SAT.hpp"
#include "core/mesh/mesh.hpp"

using namespace std;

/*Description: The main function of the SAT algorithm takes 2
Mesh objects and uses a projection system to find collisions */

bool IsSATCollision(const Mesh& mesh1, const Mesh& mesh2){
    for(Normal normal : mesh1.normals){

        float max1=projection(mesh1.vertices[0].GetPosition(), normal.GetNormal());
        float max2=projection(mesh2.vertices[0].GetPosition(), normal.GetNormal());

        float min1=projection(mesh1.vertices[0].GetPosition(), normal.GetNormal());
        float min2=projection(mesh2.vertices[0].GetPosition(), normal.GetNormal());

        for(Vertex vertex : mesh1.vertices){
            float proj = projection(vertex.GetPosition(), normal.GetNormal());
            if(proj>max1){
                max1 = proj;
            }
            if(proj<min1){
                min1 = proj;
            }
        }

        for(Vertex vertex : mesh2.vertices){
            float proj = projection(vertex.GetPosition(), normal.GetNormal());
            if(proj>max2){
                max2 = proj;
            }
            if(proj<min2){
                min2 = proj;
            }
        }

        cout <<max1;
        cout <<max2;
        cout <<min1;
        cout <<min2;



        if(((max1>max2 && max1>min2 && min1>max2 && min1>min2)
        || (max2>max1 && max2>min1 && min2>max1 && min2>min1))){
            return 0;
        }
    }
    return 1;
}

