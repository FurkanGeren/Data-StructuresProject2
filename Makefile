all: build run

build:
	g++ -I ./include -o ./lib/node.o -c ./src/node.cpp
	g++ -I ./include -o ./lib/stack.o -c ./src/stack.cpp
	g++ -I ./include -o ./lib/treenode.o -c ./src/treenode.cpp
	g++ -I ./include -o ./lib/Tree.o -c ./src/Tree.cpp
	g++ -I ./include -o ./lib/arrayList.o -c ./src/arrayList.cpp
	g++ -I ./include -o ./lib/arraylistforTree.o -c ./src/arraylistforTree.cpp
	




	g++ -I ./include -o ./bin/main ./lib/node.o ./lib/stack.o ./lib/treenode.o ./lib/Tree.o ./lib/arrayList.o ./lib/arraylistforTree.o ./src/main.cpp

run:
	./bin/main

	
	
