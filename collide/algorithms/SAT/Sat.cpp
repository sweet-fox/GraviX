#include <vector>
#include <iostream>
#include "collide/algorithms/SAT/SAT.hpp"
#include "mesh/mesh.hpp"

using namespace std;

bool IsSATCollision(const Mesh mesh1, const Mesh mesh2){ //похимичить с передаванием можно сделать быстрее

    Vec3D point1min(mesh1.vertices[0].pos.x,mesh1.vertices[0].pos.y,mesh1.vertices[0].pos.z) ;
    Vec3D point1max(mesh1.vertices[0].pos.x,mesh1.vertices[0].pos.y,mesh1.vertices[0].pos.z) ;
    Vec3D point2min(mesh2.vertices[0].pos.x,mesh2.vertices[0].pos.y,mesh2.vertices[0].pos.z) ;
    Vec3D point2max(mesh2.vertices[0].pos.x,mesh2.vertices[0].pos.y,mesh2.vertices[0].pos.z) ;

    auto iter1 {mesh1.vertices.begin()};
    auto iter2 {mesh2.vertices.begin()};

    // Rewrite min/max algorithm if it ws need

    while (iter1 != mesh1.vertices.end()){
        if((*iter1).pos.x < point1min.x){
            point1min.x = (*iter1).pos.x;
        }
        if((*iter1).pos.y < point1min.y){
            point1min.y = (*iter1).pos.y;
        }
        if((*iter1).pos.z < point1min.z){
            point1min.z = (*iter1).pos.z;
        }

        if((*iter1).pos.x > point1max.x){
            point1max.x = (*iter1).pos.x;
        }
        if((*iter1).pos.y > point1max.y){
            point1max.y = (*iter1).pos.y;
        }
        if((*iter1).pos.z > point1max.z){
            point1max.z = (*iter1).pos.z;
        }

        iter1 ++;
    }

    while (iter2 != mesh2.vertices.end()){
        if((*iter2).pos.x < point2min.x){
            point2min.x = (*iter2).pos.x;
        }
        if((*iter2).pos.y < point2min.y){
            point2min.y = (*iter2).pos.y;
        }
        if((*iter2).pos.z < point2min.z){
            point2min.z = (*iter2).pos.z;
        }

        if((*iter2).pos.x > point2max.x){
            point2max.x = (*iter2).pos.x;
        }
        if((*iter2).pos.y > point2max.y){
            point2max.y = (*iter2).pos.y;
        }
        if((*iter2).pos.z > point2max.z){
            point2max.z = (*iter2).pos.z;
        }
        iter2 ++;
    }


    bool x = not((point1min.x > point2min.x && point1min.x > point2max.x && point1max.x > point2min.x && point1max.x > point2max.x)||
            point2min.x > point1min.x && point2min.x > point1max.x && point2max.x > point1min.x && point2max.x > point1max.x);
    bool y = not((point1min.y > point2min.y && point1min.y > point2max.y && point1max.y > point2min.y && point1max.y > point2max.y)||
            point2min.y > point1min.y && point2min.y > point1max.y && point2max.y > point1min.y && point2max.y > point1max.y);
    bool z = not((point1min.z > point2min.z && point1min.z > point2max.z && point1max.z > point2min.z && point1max.z > point2max.z)||
            point2min.z > point1min.z && point2min.z > point1max.z && point2max.z > point1min.z && point2max.z > point1max.z);

    cout << endl << 'x' << point1max.x <<' '<< point1min.x <<' '<< point2max.x<<' ' << point2min.x; 
    cout << endl << 'y' << point1max.y <<' '<< point1min.y <<' '<< point2max.y <<' '<< point2min.y; 
    cout << endl << 'z' << point1max.z <<' '<< point1min.z <<' '<< point2max.z <<' '<< point2min.z; 
    cout <<endl << x << y << z;
    
    return(x && y && z);
}

