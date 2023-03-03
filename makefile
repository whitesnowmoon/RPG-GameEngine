clean: a
	rm -r main.o
	rm -r glad.o
a : 
#	gcc -Wall main/main.cpp  main/glad.c -I library/glad/include -I library/glfw/include  -L library/glfw/lib-mingw-w64 -lglfw3 -lglfw3dll -lstdc++ -lopengl32 -luser32 -lgdi32 -o main.exe
	gcc -Wall -c main/main.cpp   -I library/glad/include -I library/glfw/include  -o main.o
	gcc -Wall -c main/glad.c   -I library/glad/include -I library\glfw\include  -o glad.o
	gcc main.o glad.o -L library/glfw/lib-mingw-w64 -lglfw3 -lglfw3dll -lstdc++ -lopengl32  -lgdi32 -o main.exe

