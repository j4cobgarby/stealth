CXX=g++
CXXFLAGS=-g -Wall -Wextra
LDFLAGS=-lsfml-system -lsfml-window -lsfml-graphics
EXE=stealth

all: assets.h main.o
	$(CXX) $^ -o $(EXE) $(LDFLAGS)

assets.h:
	cd assets && ./headerify.sh ../assets.h

%.o: %.cpp
	$(CXX) -c $< -o $@ $(CXXFLAGS)
