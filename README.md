# C++ Bubble Sort Implementation

A C++ implementation of the bubble sort algorithm, converted from Go with comprehensive test coverage.

## Project Structure

- **bubble_sort.cpp** - Main program demonstrating the bubble sort algorithm
- **test_bubble_sort.cpp** - Comprehensive test suite with 8 test cases
- **Makefile** - Build configuration for compilation and testing

## Building

Build all targets:
```bash
make
```

Build individual targets:
```bash
make bubble_sort      # Build main program
make test_bubble_sort # Build test executable
```

## Running

### Main Program
```bash
make bubble_sort
./bubble_sort
```

Output:
```
Original array: 64 34 25 12 22 11 90 
Sorted array: 11 12 22 25 34 64 90
```

### Test Suite
```bash
make test
```

The test suite includes:
1. ✓ Already sorted array
2. ✓ Reverse sorted array
3. ✓ Random array
4. ✓ Single element
5. ✓ Two elements
6. ✓ Array with duplicates
7. ✓ Empty array
8. ✓ Negative numbers

All tests should pass with output showing each test case.

## Algorithm

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

**Time Complexity:** O(n²)
**Space Complexity:** O(1)

## Compilation Details

- **C++ Standard:** C++11
- **Compiler:** g++
- **Flags:** -Wall -Wextra (warnings enabled)

## Cleaning

Remove compiled binaries:
```bash
make clean
```

## Dependencies

- g++ compiler
- make build tool
- Standard C++ library