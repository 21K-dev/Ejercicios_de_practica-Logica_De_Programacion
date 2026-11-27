#include <iostream>

int main() {
    // Explicit declaration and direct initialization
    int numbers[5] = { 10, 20, 30, 40, 50 };
    float prices[2] = { 99.5f, 150.0f };
    char letters[3] = { 'A', 'B', 'C' };

    // Direct access using zero-based indices
    std::cout << "First element: " << numbers[0] << "\n";
    std::cout << "Last element: " << numbers[4] << "\n";
    std::cout << "Second letter: " << letters[1] << "\n";

    return 0;
}