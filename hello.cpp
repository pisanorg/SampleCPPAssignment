/**
 * Sample Assignment
 * 
 * Please refer to the README.md for the assignment instructions.
 * 
 * */

#include <iostream>
#include <stdexcept>
#include <stdlib.h>

int fib(int n);

int main()
{
    std::cout << "Hello world! My name is Bobby Tables #12341234" << std::endl;

    for (int i = 0; i < 10; i++)
    {
        std::cout << "fib(" << i << ") == " << fib(i) << std::endl;
    }

    return EXIT_SUCCESS;
}

/**
 * Fibonacci Sequence
 * 
 * Accepts an integer N, and returns the Nth number of the
 * Fibonacci sequence.
 * */
int fib(int n)
{
    // TODO, throw exception because not implemented
    throw std::runtime_error("Fibonacci function is not implemented yet.");
    return -1;
}