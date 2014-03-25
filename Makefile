#@author Ray Yee

CC = gcc

TARGET = cross2d.exe

CFLAGS = -Isrc/gemo -Iplatform/mingw -Isrc

LDFLAGS = -lgdi32 -lglew32 -lopengl32

SRC = \
src/gemo/Triangle.c \
src/shader/ShaderLoader.c \
src/Cross2d.c

PLATFORM_SRC = \
platform/mingw/MingwWnd.c

TEST_SRC = \
test/Main.c

all : 
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC) $(TEST_SRC) $(PLATFORM_SRC) $(LDFLAGS)