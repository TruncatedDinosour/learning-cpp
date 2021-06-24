CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -Wpedantic -ffunction-sections -fdata-sections -Wno-c++98-compat -O3 -s -g
LDFLAGS = -Wl,--gc-sections,-strip-all
SFLAGS = --strip-all --remove-section=.note --remove-section=.comment --strip-debug --strip-unneeded


all:
	@echo "type \"make compile\" to compile"
	@echo "type \"make strip\" to compile & strip"

compile:
	${CXX} main.cpp -std=c++20 -Wall -Wextra -Wpedantic -o main

strip:
	${CXX} main.cpp ${CXXFLAGS} -o main ${LDFLAGS}
	strip ${SFLAGS} main -v -o main

install: compile
