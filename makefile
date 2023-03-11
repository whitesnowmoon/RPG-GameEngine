#https://github.com/whitesnowmoon/RPG-GameEngine.git
.PHONY:main.exe
library= -I library/glad/include -I library/glfw/include -I library\glm-0.9.9.8\glm
obj=main.o glad.o Application.o Spirit.o Director.o Texture.o
main.exe : $(obj)
	gcc $^ -g -L library/glfw/lib-mingw-w64 -lglfw3 -lglfw3dll -lstdc++ -lopengl32  -lgdi32 -o $@
%.o : main/%.cpp
	gcc -g  -c $^  $(library) -o $@
%.o : main/%.c
	gcc -g  -c $^  $(library) -o $@
# main.o:
# 	gcc -Wall -c main/main.cpp  $(library)  -o main.o
# glad.o:
# 	gcc -Wall -c main/glad.c   $(library)  -o glad.o
# application.o:
# 	gcc -Wall -c main/application.cpp   $(library)  -o application.o
# ListenTask.o:
# 	gcc -Wall -c main/ListenTask.cpp   $(library)  -o ListenTask.o
# ControlTerminal.o:
# 	gcc -Wall -c main/ControlTerminal.cpp   $(library)  -o ControlTerminal.o
# GLPaintTerminal.o:
# 	gcc -Wall -c main/GLPaintTerminal.cpp   $(library)  -o GLPaintTerminal.o
# PaintTask.o:
# 	gcc -Wall -c main/PaintTask.cpp   $(library)  -o PaintTask.o
clean: 
	rm -r main.o
	rm -r glad.o
	rm -r Application.o
	rm -r Spirit.o
	rm -r Director.o
	rm -r Texture.o


