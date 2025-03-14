all: compile

compile:
	g++ -I. -Iread -Icollide/algorithms/SAT -Imesh main/main.cpp read/obj.cpp collide/algorithms/SAT/SAT.cpp mesh/mesh.cpp

debug:
	g++ -g -I. -Iread -Icollide/algorithms/SAT -Imesh main/main.cpp read/obj.cpp collide/algorithms/SAT/SAT.cpp mesh/mesh.cpp
