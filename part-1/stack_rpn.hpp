#ifndef __stack_rpn__
#define __stack_rpn__

#include "stack.hpp"
#include <cassert>
#include <functional>

// WRITE YOUR CODE HERE
template <typename T> 
void multiplies(Stack<T> &stack){
        T number1 = stack.top();
        stack.pop();
        T number2 = stack.top();
        stack.pop();
        stack.push(number1*number2);
    };

template <typename T>
void plus(Stack<T> &stack){
        T number1 = stack.top();
        stack.pop();
        T number2 = stack.top();
        stack.pop();
        stack.push(number1+number2);
    };

template <typename T>
Stack<T> &operator<<(Stack<T> &stack, const T &value)
{
    // WRITE YOUR CODE HERE
    stack.push(value);
    return stack;
}

template <typename T>
Stack<T> &operator<<(Stack<T> &stack, void(*func)(Stack<T> &stack))
{
    func(stack);
    return stack;
}

#endif // __stack_rpn__