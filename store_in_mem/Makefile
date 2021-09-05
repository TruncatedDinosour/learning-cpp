CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -Wpedantic -Wno-c++98-compat -fdiagnostics-path-format=inline-events
OPTIMFLAGS = -ffunction-sections -fdata-sections -Ofast -s ${CXXFLAGS}
STRIPFLAGS = --strip-all --remove-section=.note --remove-section=.gnu.version --remove-section=.comment --strip-debug --strip-unneeded
DEVFLAGS = -O0 -Og -g3 -ggdb3 ${CXXFLAGS}


all: dev

dev:
	${CXX} ${DEVFLAGS} main.cpp -o main

compile:
	${CXX} ${OPTIMFLAGS} main.cpp -o main

strip: compile
	strip ${STRIPFLAGS} main -o main
