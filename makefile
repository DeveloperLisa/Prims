default: build

build:
	g++ -o Prims.out Prims.cpp

run: build
	./Prims.out 8 test_graph.txt

debug:
	g++ -g -o PrimsDebug.out Prims.cpp
	gdb PrimsDebug.out

clean:
	rm -f Prims