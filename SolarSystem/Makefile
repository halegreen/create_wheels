CXX=g++
EXEC=SolarSystem
SOURCES=main.cpp Star.cpp SolarSystem.cpp
OBJECT=main.o Star.o SolarSystem.o

LDFLAGS= -framework GLUT -framework OpenGL 

all:
	$(CXX) $(SOURCES) $(LDFLAGS) -o $(EXEC)

clean:
	rm -f $(EXEC) *.(gdb) *.o
