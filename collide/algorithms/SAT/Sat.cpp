#include <vector>
#include <iostream>
#include "SAT.hpp"
#include "mesh.hpp"

using namespace std;

bool IsSATCollision(const vector<Vertex> mesh1, const vector<Vertex> mesh2){
    Vec3D point1min;
    Vec3D point1max;
    Vec3D point2min;
    Vec3D point2max;

    auto iter1 {mesh1.begin()};
    auto iter2 {mesh2.begin()};

    // Rewrite min/max algorithm if it ws need

    while (iter1 != mesh1.end()){
        if((*iter1).x < point1min.x){
            point1min.x = (*iter1).x;
        }
        if((*iter1).y < point1min.y){
            point1min.y = (*iter1).y;
        }
        if((*iter1).z < point1min.z){
            point1min.z = (*iter1).z;
        }

        if((*iter1).x > point1max.x){
            point1max.x = (*iter1).x;
        }
        if((*iter1).y > point1max.y){
            point1max.y = (*iter1).y;
        }
        if((*iter1).z > point1max.z){
            point1max.z = (*iter1).z;
        }

        iter1 ++;
    }

    while (iter2 != mesh2.end()){
        if((*iter2).x < point2min.x){
            point2min.x = (*iter2).x;
        }
        if((*iter2).y < point2min.y){
            point2min.y = (*iter2).y;
        }
        if((*iter2).z < point2min.z){
            point2min.z = (*iter2).z;
        }

        if((*iter2).x > point2max.x){
            point2max.x = (*iter2).x;
        }
        if((*iter2).y > point2max.y){
            point2max.y = (*iter2).y;
        }
        if((*iter2).z > point2max.z){
            point2max.z = (*iter2).z;
        }

        iter2 ++;
    }

    bool x = ((point1min.x < point2min.x && point2min.x < point1max.x) || 
            (point2min.x < point1min.x && point1min.x < point2max.x) || 
            (point1min.x < point2max.x && point2max.x < point1max.x) ||
            (point2min.x < point1max.x && point1max.x < point2max.x));
    bool y = ((point1min.x < point2min.x && point2min.x < point1max.x) || 
            (point2min.x < point1min.x && point1min.x < point2max.x) || 
            (point1min.x < point2max.x && point2max.x < point1max.x) ||
            (point2min.x < point1max.x && point1max.x < point2max.x));
    bool z = ((point1min.x < point2min.x && point2min.x < point1max.x) || 
            (point2min.x < point1min.x && point1min.x < point2max.x) || 
            (point1min.x < point2max.x && point2max.x < point1max.x) ||
            (point2min.x < point1max.x && point1max.x < point2max.x));
    
    return(x || y || z);
}

