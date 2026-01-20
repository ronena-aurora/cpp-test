CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

all: bubble_sort test_bubble_sort

bubble_sort: bubble_sort.cpp
	$(CXX) $(CXXFLAGS) -o bubble_sort bubble_sort.cpp

test_bubble_sort: test_bubble_sort.cpp
	$(CXX) $(CXXFLAGS) -o test_bubble_sort test_bubble_sort.cpp

test: test_bubble_sort
	./test_bubble_sort

clean:
	rm -f bubble_sort test_bubble_sort

.PHONY: all test clean
