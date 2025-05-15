all: compile

compile:
	g++ -I. -Iread -Iphysics/collide/algorithms/SAT -Imesh main/main.cpp read/obj.cpp physics/collide/algorithms/SAT/SAT.cpp core/mesh/mesh.cpp

debug:
	g++ -g -I. -Iread -Iphysics/collide/algorithms/SAT -Imesh main/main.cpp read/obj.cpp physics/collide/algorithms/SAT/SAT.cpp core/mesh/mesh.cpp
