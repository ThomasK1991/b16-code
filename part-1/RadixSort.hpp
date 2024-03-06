#include <iterator>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void RadixSort(std::vector<int>::iterator beginning, std::vector<int>::iterator ending, int digit) {
    if (digit < 0) {
        return;  // Base case: no more digits to compare
    }

    // Temporary vectors for binary digit comparison
    std::vector<int> bin0Vector;
    std::vector<int> bin1Vector;

    // Iterate through the range and separate elements based on the current binary digit
    for (auto it = beginning; it != ending; ++it) {
        int number = *it;
        int currentDigit = (number >> digit) & 1;

        if (currentDigit == 0) {
            bin0Vector.push_back(number);
        } else {
            bin1Vector.push_back(number);
        }
    }

    // Recursively call RadixSort on each sub-range
    RadixSort(begin(bin0Vector), end(bin0Vector), digit - 1);
    RadixSort(begin(bin1Vector), end(bin1Vector), digit - 1);

    // Merge the two sorted sub-ranges
    auto it = beginning;
    it = copy(bin0Vector.begin(), bin0Vector.end(), it);
    copy(bin1Vector.begin(), bin1Vector.end(), it);
}
