EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++0x -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp calendar.cpp
	$(CXX) $(CXXFLAGS) main.cpp calendar.cpp -o $(EXENAME)

.PHONY: clean
clean:
	rm -f $(EXENAME)
