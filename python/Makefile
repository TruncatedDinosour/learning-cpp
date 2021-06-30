CXX = g++
CXXFLAGS = -I/usr/include/python3.9  $(pybind11-config --includes) $(python3-config --cflags --includes --libs --embed) -std=c++20 -Wall -Wextra -Wpedantic -ffunction-sections -fdata-sections -Wno-c++98-compat -Ofast -fmodules-ts -fdiagnostics-path-format=inline-events -lm -s -g
LDFLAGS = $(python3-config --ldflags --embed) -Wl,--gc-sections,-strip-all
SFLAGS = --strip-all --remove-section=.note --remove-section=.gnu.version --remove-section=.comment --strip-debug --strip-unneeded


all:
	@echo "type \"make compile\" to compile"
	@echo "type \"make strip\" to compile & strip"

compile:
	${CXX} main.cpp ${CXXFLAGS} -o main ${LDFLAGS}

strip:
	${CXX} main.cpp ${CXXFLAGS} -o main ${LDFLAGS}
	strip ${SFLAGS} main -v -o main
