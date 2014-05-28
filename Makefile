all: slmain

slmain: slmain.cpp sl.h
	g++ -Wall -Wextra slmain.cpp -o slmain
