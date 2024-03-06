#include "RadixSort.hpp"
#include "utils.hpp"

int main(int argc, char **argv)
{
    auto A = std::vector<int>{1,  19, 2,  9,  12, 18, 4, 8, 5,  6,
                              17, 10, 11, 14, 16, 15, 7, 3, 13, 20};
    print(A, "Before sorting: ");
    RadixSort(begin(A), end(A),4);
    print(A, "After sorting: ");
}