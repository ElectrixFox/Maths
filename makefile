CXX = gcc
CXXFLAGS = -Wall -g -I.
LIBS = -lpthread

APPNAME = main

SRC := $(wildcard *.c)
OBJS := $(addprefix obj/, $(patsubst %.c, %.o, $(wildcard *.c)))

obj/%.o: %.c
	$(CXX) $(CXXFLAGS) -c -o $@ $^

all: $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $(APPNAME) $(LIBS)

clean:
	rm obj/*.o