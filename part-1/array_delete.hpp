#ifndef __array_delete__
#define __array_delete__

#include <cstddef>
#include <utility>
#include <vector>
#include "utils.hpp"
#include <thread>
#include <chrono>
template <typename T>
void array_delete(std::vector<T> &A, std::size_t index)
{
    // WRITE YOUR CODE HERE
    assert(index < A.size() || index>=0);
    if (index == A.size()-1)
    {
        A.pop_back(); //We chill
        return;
    }
    else{
        for(int i = index; i <A.size()-1; i++)
        {
            A[i] = A[i+1];
        }
    }
    A.pop_back();
    return;
}

#endif // __array_delete__