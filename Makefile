
all:
	gcc -c src/*.c
	ar rcs libSSTL.a *.o
