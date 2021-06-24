all:
	@echo "type \"make compile\" to compile"

compile:
	g++ main.cpp -std=c++20 -Wall -Wextra -Wpedantic -ffunction-sections -fdata-sections -Wno-c++98-compat -O3 -s -g -o main -Wl,--gc-sections,-strip-all
	strip --strip-all --remove-section=.note --remove-section=.comment --strip-debug --strip-unneeded main -v -o main
