#include <iostream>
#include <vector>
#include <cassert>

// BubbleSort sorts a vector of integers using the bubble sort algorithm
void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap adjacent elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void testBubbleSort() {
    // Test 1: Already sorted array
    {
        std::vector<int> arr = {1, 2, 3, 4, 5};
        bubbleSort(arr);
        std::vector<int> expected = {1, 2, 3, 4, 5};
        assert(arr == expected);
        std::cout << "✓ Test 1 passed: Already sorted array" << std::endl;
    }
    
    // Test 2: Reverse sorted array
    {
        std::vector<int> arr = {5, 4, 3, 2, 1};
        bubbleSort(arr);
        std::vector<int> expected = {1, 2, 3, 4, 5};
        assert(arr == expected);
        std::cout << "✓ Test 2 passed: Reverse sorted array" << std::endl;
    }
    
    // Test 3: Random array
    {
        std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
        bubbleSort(arr);
        std::vector<int> expected = {11, 12, 22, 25, 34, 64, 90};
        assert(arr == expected);
        std::cout << "✓ Test 3 passed: Random array" << std::endl;
    }
    
    // Test 4: Single element
    {
        std::vector<int> arr = {42};
        bubbleSort(arr);
        std::vector<int> expected = {42};
        assert(arr == expected);
        std::cout << "✓ Test 4 passed: Single element" << std::endl;
    }
    
    // Test 5: Two elements
    {
        std::vector<int> arr = {2, 1};
        bubbleSort(arr);
        std::vector<int> expected = {1, 2};
        assert(arr == expected);
        std::cout << "✓ Test 5 passed: Two elements" << std::endl;
    }
    
    // Test 6: Array with duplicates
    {
        std::vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6};
        bubbleSort(arr);
        std::vector<int> expected = {1, 1, 2, 3, 4, 5, 6, 9};
        assert(arr == expected);
        std::cout << "✓ Test 6 passed: Array with duplicates" << std::endl;
    }
    
    // Test 7: Empty array
    {
        std::vector<int> arr = {};
        bubbleSort(arr);
        std::vector<int> expected = {};
        assert(arr == expected);
        std::cout << "✓ Test 7 passed: Empty array" << std::endl;
    }
    
    // Test 8: Negative numbers
    {
        std::vector<int> arr = {-5, 3, -1, 0, 2};
        bubbleSort(arr);
        std::vector<int> expected = {-5, -1, 0, 2, 3};
        assert(arr == expected);
        std::cout << "✓ Test 8 passed: Negative numbers" << std::endl;
    }
}

int main() {
    std::cout << "Running BubbleSort tests...\n" << std::endl;
    
    try {
        testBubbleSort();
        std::cout << "\n✓ All tests passed!" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "\n✗ Test failed: " << e.what() << std::endl;
        return 1;
    }
}
