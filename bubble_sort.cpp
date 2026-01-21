#include <iostream>
#include <vector>
#include <random>

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

// SlowBubbleSort is an inefficient bubble sort that always performs all comparisons
void slowBubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap adjacent elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Generate random size between 100 and 100000
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> sizeDistr(100, 100000);
    int size = sizeDistr(gen);
    
    // Create a dynamic vector at runtime with random size
    std::vector<int> dynamicVector(size);
    
    // Fill vector with random values
    std::uniform_int_distribution<> valueDistr(1, 1000);
    for (int i = 0; i < size; i++) {
        dynamicVector[i] = valueDistr(gen);
    }
    
    std::cout << "Generated vector of size: " << size << std::endl;
    std::cout << "First 10 elements: ";
    for (int i = 0; i < std::min(10, size); i++) {
        std::cout << dynamicVector[i] << " ";
    }
    std::cout << std::endl;
    
    bubbleSort(dynamicVector);
    
    std::cout << "Sorted! First 10 elements: ";
    for (int i = 0; i < std::min(10, size); i++) {
        std::cout << dynamicVector[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
