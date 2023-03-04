library= -I library/glad/include -I library/glfw/include
obj=main.o  glad.o  application.o ListenTask.o ControlTerminal.o
main.exe : $(obj)
	gcc $^ -L library/glfw/lib-mingw-w64 -lglfw3 -lglfw3dll -lstdc++ -lopengl32  -lgdi32 -o $@
main.o:
	gcc -Wall -c main/main.cpp  $(library)  -o main.o
glad.o:
	gcc -Wall -c main/glad.c   $(library)  -o glad.o
application.o:
	gcc -Wall -c main/application.cpp   $(library)  -o application.o
ListenTask.o:
	gcc -Wall -c main/ListenTask.cpp   $(library)  -o ListenTask.o
ControlTerminal.o:
	gcc -Wall -c main/ControlTerminal.cpp   $(library)  -o ControlTerminal.o
clean: 
	rm -r main.o
	rm -r glad.o
	rm -r application.o
	rm -r ListenTask.o
	rm -r ControlTerminal.o

