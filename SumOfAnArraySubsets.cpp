#include <iostream>
#include <cmath>

int main()
{
    // Array of 6 elements
    int Array[] = { 1, 2, 3, 4, 5, 6 };
    const int ArraySize = sizeof(Array) / sizeof(Array[0]); // Can also be written without dividing. Just a habit

    // Calculate the total number of subsets (2^n)
    int TotalSubsets = std::pow(2, ArraySize);
    int TotalSum = 0;

    // Iterate through all possible subsets
    for (int i = 0; i < TotalSubsets; i++) 
    {
        int CurrentSum = 0;

        // Iterate through each element and check if it should be included in the current subset
        for (int j = 0; j < ArraySize; j++) 
        {
            if (i & (1 << j)) 
            {
                CurrentSum += Array[j];
            }
        }

        // Add the sum of the current subset to the total sum
        TotalSum += CurrentSum;
    }

    // Print the total sum
    std::cout << "Sum of all subsets: " << TotalSum << std::endl;
    std::cin.get();

    return 0;
}