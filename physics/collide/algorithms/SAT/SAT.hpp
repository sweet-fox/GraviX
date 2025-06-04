/*--------------------- <Sat.hpp> - <Sat - header file> ---------------------*\
| Part of the Physics Engine, under the MIT License.                          |
| SPDX-License-Identifier: MIT                                                |
\*---------------------------------------------------------------------------*/

/*------------------------------- Description -------------------------------*\
| This file contains announcement of the main function                           |
| of the SAT collision algorithm.                                             |
\*---------------------------------------------------------------------------*/


#include <vector>
#include <iostream>
#include "core/mesh/mesh.hpp"

using namespace std;

/*Description: The announcement of main function of the SAT algorithm takes 2
Mesh objects and uses a projection system to find collisions */

bool IsSATCollision(const  Mesh& mesh1, const Mesh& mesh2);
