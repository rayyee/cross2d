#@author Ray Yee

CC = gcc

TARGET = cross2d.exe

LDFLAGS = -lgdi32 -lglew32 -lopengl32

SRC = \
src/Sprite.c 

TEST_SRC = \
test/Main.c

all : 
	$(CC) -o $(TARGET) $(SRC) $(TEST_SRC) $(LDFLAGS)